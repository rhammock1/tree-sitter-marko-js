#include "tree_sitter/parser.h"

#include <stdbool.h>
#include <string.h>

enum TokenType {
  RAW_TEXT,
  JS_EXPRESSION,
  JS_PAREN_EXPRESSION,
  JS_LINE_EXPRESSION,
  COMMENT_CONTENT,
};

static void skip_whitespace(TSLexer *lexer) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
         lexer->lookahead == '\r' || lexer->lookahead == '\n') {
    lexer->advance(lexer, true);
  }
}

static bool is_string_start(int32_t c) {
  return c == '"' || c == '\'' || c == '`';
}

static bool skip_string(TSLexer *lexer, int32_t quote) {
  lexer->advance(lexer, false);
  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '\\') {
      lexer->advance(lexer, false);
      if (lexer->lookahead != 0) {
        lexer->advance(lexer, false);
      }
    } else if (lexer->lookahead == quote) {
      lexer->advance(lexer, false);
      return true;
    } else {
      lexer->advance(lexer, false);
    }
  }
  return false;
}

static void skip_line_comment_content(TSLexer *lexer) {
  // Already past the // - just consume to end of line
  while (lexer->lookahead != 0 && lexer->lookahead != '\n') {
    lexer->advance(lexer, false);
  }
}

static void skip_block_comment(TSLexer *lexer) {
  lexer->advance(lexer, false); // *
  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '*') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '/') {
        lexer->advance(lexer, false);
        return;
      }
    } else {
      lexer->advance(lexer, false);
    }
  }
}

static bool scan_raw_text(TSLexer *lexer) {
  int depth = 0;
  bool has_content = false;

  while (lexer->lookahead != 0) {
    if (is_string_start(lexer->lookahead)) {
      has_content = true;
      if (!skip_string(lexer, lexer->lookahead)) return false;
    } else if (lexer->lookahead == '/') {
      has_content = true;
      lexer->advance(lexer, false);
      if (lexer->lookahead == '/') {
        lexer->advance(lexer, false);
        skip_line_comment_content(lexer);
      } else if (lexer->lookahead == '*') {
        skip_block_comment(lexer);
      }
    } else if (lexer->lookahead == '{') {
      depth++;
      has_content = true;
      lexer->advance(lexer, false);
    } else if (lexer->lookahead == '}') {
      if (depth == 0) {
        lexer->result_symbol = RAW_TEXT;
        return has_content;
      }
      depth--;
      has_content = true;
      lexer->advance(lexer, false);
    } else {
      has_content = true;
      lexer->advance(lexer, false);
    }
  }
  return false;
}

// Scan a JS expression to end of line.
// Handles strings that span across the line, and nested braces/parens.
// Stops at newline at depth 0, consuming trailing semicolons.
static bool scan_js_line_expression(TSLexer *lexer) {
  bool has_content = false;
  int brace_depth = 0;

  // Skip leading whitespace (but not newlines)
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }

  // If first non-whitespace char is '{', don't match -
  // let grammar handle block forms (static {}, $ {}, class {})
  if (lexer->lookahead == '{') return false;

  while (lexer->lookahead != 0) {
    if (brace_depth == 0 && (lexer->lookahead == '\n' || lexer->lookahead == '\r')) {
      if (has_content) {
        lexer->mark_end(lexer);
        lexer->result_symbol = JS_LINE_EXPRESSION;
        return true;
      }
      return false;
    }

    if (is_string_start(lexer->lookahead)) {
      has_content = true;
      if (!skip_string(lexer, lexer->lookahead)) return false;
      lexer->mark_end(lexer);
      continue;
    }

    if (lexer->lookahead == '/') {
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      has_content = true;
      if (lexer->lookahead == '/') {
        // Line comment - this effectively ends the expression
        // Don't consume the comment - let the expression end here
        lexer->result_symbol = JS_LINE_EXPRESSION;
        return true;
      } else if (lexer->lookahead == '*') {
        skip_block_comment(lexer);
        lexer->mark_end(lexer);
      }
      continue;
    }

    if (lexer->lookahead == '{') brace_depth++;
    else if (lexer->lookahead == '}') brace_depth--;

    has_content = true;
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  }

  // EOF
  if (has_content) {
    lexer->result_symbol = JS_LINE_EXPRESSION;
    return true;
  }
  return false;
}

// JS expression scanner.
// paren_mode: if true, only stop at ) at depth 0
static bool scan_js_expr(TSLexer *lexer, bool paren_mode, enum TokenType result_type) {
  int paren_depth = 0;
  int bracket_depth = 0;
  int brace_depth = 0;
  bool has_content = false;

  skip_whitespace(lexer);

  while (lexer->lookahead != 0) {
    bool at_depth_0 = (paren_depth == 0 && bracket_depth == 0 && brace_depth == 0);

    if (at_depth_0) {
      if (lexer->lookahead == ')' || lexer->lookahead == ']' ||
          lexer->lookahead == '}') {
        if (has_content) {
          lexer->mark_end(lexer);
          lexer->result_symbol = result_type;
          return true;
        }
        return false;
      }

      if (!paren_mode) {
        if (lexer->lookahead == '|' || lexer->lookahead == ',') {
          if (has_content) {
            lexer->mark_end(lexer);
            lexer->result_symbol = result_type;
            return true;
          }
          return false;
        }
        if (lexer->lookahead == '>') {
          if (has_content) {
            lexer->mark_end(lexer);
            lexer->result_symbol = result_type;
            return true;
          }
          return false;
        }
        if (lexer->lookahead == ' ' || lexer->lookahead == '\t' ||
            lexer->lookahead == '\r' || lexer->lookahead == '\n') {
          if (has_content) {
            lexer->mark_end(lexer);
            lexer->result_symbol = result_type;
            return true;
          }
          skip_whitespace(lexer);
          continue;
        }
      }

      if (lexer->lookahead == '/') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead == '>') {
          if (has_content) {
            lexer->result_symbol = result_type;
            return true;
          }
          return false;
        }
        if (lexer->lookahead == '/') {
          lexer->advance(lexer, false);
          skip_line_comment_content(lexer);
          has_content = true;
          lexer->mark_end(lexer);
          continue;
        }
        if (lexer->lookahead == '*') {
          skip_block_comment(lexer);
          has_content = true;
          lexer->mark_end(lexer);
          continue;
        }
        has_content = true;
        continue;
      }
    }

    if (is_string_start(lexer->lookahead)) {
      if (!has_content && !paren_mode) return false;
      if (!skip_string(lexer, lexer->lookahead)) return false;
      has_content = true;
      lexer->mark_end(lexer);
      continue;
    }

    if (!at_depth_0 && lexer->lookahead == '/') {
      lexer->advance(lexer, false);
      has_content = true;
      if (lexer->lookahead == '/') {
        lexer->advance(lexer, false);
        skip_line_comment_content(lexer);
      } else if (lexer->lookahead == '*') {
        skip_block_comment(lexer);
      }
      lexer->mark_end(lexer);
      continue;
    }

    if (lexer->lookahead == '(') paren_depth++;
    else if (lexer->lookahead == ')') paren_depth--;
    else if (lexer->lookahead == '[') bracket_depth++;
    else if (lexer->lookahead == ']') bracket_depth--;
    else if (lexer->lookahead == '{') brace_depth++;
    else if (lexer->lookahead == '}') brace_depth--;

    has_content = true;
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
  }

  if (has_content) {
    lexer->result_symbol = result_type;
    return true;
  }
  return false;
}

static bool scan_comment_content(TSLexer *lexer) {
  bool has_content = false;

  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '-') {
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
      if (lexer->lookahead == '-') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '>') {
          lexer->result_symbol = COMMENT_CONTENT;
          return has_content;
        }
        has_content = true;
      } else {
        has_content = true;
      }
    } else {
      has_content = true;
      lexer->advance(lexer, false);
    }
  }

  return false;
}

void *tree_sitter_marko_external_scanner_create(void) { return NULL; }
void tree_sitter_marko_external_scanner_destroy(void *p) {}
unsigned tree_sitter_marko_external_scanner_serialize(void *p, char *b) { return 0; }
void tree_sitter_marko_external_scanner_deserialize(void *p, const char *b, unsigned l) {}

bool tree_sitter_marko_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  if (valid_symbols[COMMENT_CONTENT]) {
    return scan_comment_content(lexer);
  }

  if (valid_symbols[RAW_TEXT] && !valid_symbols[JS_EXPRESSION] &&
      !valid_symbols[JS_PAREN_EXPRESSION] && !valid_symbols[JS_LINE_EXPRESSION]) {
    return scan_raw_text(lexer);
  }

  // JS_LINE_EXPRESSION: reads to end of line (for import, scriptlet line, static)
  if (valid_symbols[JS_LINE_EXPRESSION] && !valid_symbols[JS_EXPRESSION]) {
    return scan_js_line_expression(lexer);
  }

  // JS_PAREN_EXPRESSION: inside tag_argument parens, only ) is a delimiter
  if (valid_symbols[JS_PAREN_EXPRESSION]) {
    return scan_js_expr(lexer, true, JS_PAREN_EXPRESSION);
  }

  // JS_EXPRESSION: in attribute values etc., whitespace/>/|/, are delimiters
  if (valid_symbols[JS_EXPRESSION]) {
    return scan_js_expr(lexer, false, JS_EXPRESSION);
  }

  return false;
}
