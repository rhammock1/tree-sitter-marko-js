#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_BANG_DASH_DASH = 1,
  anon_sym_DASH_DASH_GT = 2,
  anon_sym_SLASH_SLASH = 3,
  anon_sym_LT = 4,
  anon_sym_GT = 5,
  anon_sym_LT_SLASH = 6,
  anon_sym_SLASH_GT = 7,
  sym_node_name = 8,
  anon_sym_EQ = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOLLAR = 12,
  sym_html_inline_js = 13,
  anon_sym_DOLLAR2 = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LTfor_PIPE = 17,
  anon_sym_PIPE = 18,
  anon_sym_of_EQ = 19,
  anon_sym_LT_SLASHfor_GT = 20,
  aux_sym_if_block_token1 = 21,
  aux_sym_if_block_token2 = 22,
  anon_sym_LT_SLASHif_GT = 23,
  sym_const_declaration = 24,
  sym_let_declaration = 25,
  sym_var_declaration = 26,
  sym_variable_name = 27,
  sym_any_text = 28,
  sym_text = 29,
  aux_sym_string_token1 = 30,
  aux_sym_string_token2 = 31,
  aux_sym_string_token3 = 32,
  sym__javascript_content = 33,
  sym_source_file = 34,
  sym__node = 35,
  sym_block_comment = 36,
  sym_inline_comment = 37,
  sym_element = 38,
  sym_start_tag = 39,
  sym_end_tag = 40,
  sym_self_closing_tag = 41,
  sym_attribute = 42,
  sym_attribute_function_call = 43,
  sym_inline_javascript_expression = 44,
  sym_javascript_block = 45,
  sym_for_block = 46,
  sym_if_block = 47,
  sym_variable = 48,
  sym_string = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_block_comment_repeat1 = 51,
  aux_sym_start_tag_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_SLASH_SLASH] = "//",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_SLASH_GT] = "/>",
  [sym_node_name] = "node_name",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$ ",
  [sym_html_inline_js] = "html_inline_js",
  [anon_sym_DOLLAR2] = "$",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LTfor_PIPE] = "<for|",
  [anon_sym_PIPE] = "|",
  [anon_sym_of_EQ] = "of=",
  [anon_sym_LT_SLASHfor_GT] = "</for>",
  [aux_sym_if_block_token1] = "if_block_token1",
  [aux_sym_if_block_token2] = "if_block_token2",
  [anon_sym_LT_SLASHif_GT] = "</if>",
  [sym_const_declaration] = "const_declaration",
  [sym_let_declaration] = "let_declaration",
  [sym_var_declaration] = "var_declaration",
  [sym_variable_name] = "variable_name",
  [sym_any_text] = "any_text",
  [sym_text] = "text",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [aux_sym_string_token3] = "string_token3",
  [sym__javascript_content] = "_javascript_content",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym_block_comment] = "block_comment",
  [sym_inline_comment] = "inline_comment",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_attribute] = "attribute",
  [sym_attribute_function_call] = "attribute_function_call",
  [sym_inline_javascript_expression] = "inline_javascript_expression",
  [sym_javascript_block] = "javascript_block",
  [sym_for_block] = "for_block",
  [sym_if_block] = "if_block",
  [sym_variable] = "variable",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym_node_name] = sym_node_name,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_html_inline_js] = sym_html_inline_js,
  [anon_sym_DOLLAR2] = anon_sym_DOLLAR2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LTfor_PIPE] = anon_sym_LTfor_PIPE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_of_EQ] = anon_sym_of_EQ,
  [anon_sym_LT_SLASHfor_GT] = anon_sym_LT_SLASHfor_GT,
  [aux_sym_if_block_token1] = aux_sym_if_block_token1,
  [aux_sym_if_block_token2] = aux_sym_if_block_token2,
  [anon_sym_LT_SLASHif_GT] = anon_sym_LT_SLASHif_GT,
  [sym_const_declaration] = sym_const_declaration,
  [sym_let_declaration] = sym_let_declaration,
  [sym_var_declaration] = sym_var_declaration,
  [sym_variable_name] = sym_variable_name,
  [sym_any_text] = sym_any_text,
  [sym_text] = sym_text,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym__javascript_content] = sym__javascript_content,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym_block_comment] = sym_block_comment,
  [sym_inline_comment] = sym_inline_comment,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_attribute] = sym_attribute,
  [sym_attribute_function_call] = sym_attribute_function_call,
  [sym_inline_javascript_expression] = sym_inline_javascript_expression,
  [sym_javascript_block] = sym_javascript_block,
  [sym_for_block] = sym_for_block,
  [sym_if_block] = sym_if_block,
  [sym_variable] = sym_variable,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_html_inline_js] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTfor_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHfor_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_if_block_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_block_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_SLASHif_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_const_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_any_text] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym__javascript_content] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_javascript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_javascript_block] = {
    .visible = true,
    .named = true,
  },
  [sym_for_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 3,
  [6] = 2,
  [7] = 2,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 11,
  [16] = 10,
  [17] = 13,
  [18] = 12,
  [19] = 11,
  [20] = 9,
  [21] = 12,
  [22] = 13,
  [23] = 10,
  [24] = 9,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 30,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 39,
  [48] = 48,
  [49] = 49,
  [50] = 44,
  [51] = 51,
  [52] = 31,
  [53] = 32,
  [54] = 33,
  [55] = 34,
  [56] = 36,
  [57] = 37,
  [58] = 38,
  [59] = 40,
  [60] = 41,
  [61] = 30,
  [62] = 48,
  [63] = 49,
  [64] = 46,
  [65] = 51,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 49,
  [70] = 38,
  [71] = 39,
  [72] = 51,
  [73] = 31,
  [74] = 32,
  [75] = 33,
  [76] = 34,
  [77] = 36,
  [78] = 37,
  [79] = 41,
  [80] = 40,
  [81] = 48,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 85,
  [89] = 86,
  [90] = 86,
  [91] = 85,
  [92] = 84,
  [93] = 84,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 103,
  [109] = 109,
  [110] = 106,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 103,
  [116] = 116,
  [117] = 105,
  [118] = 106,
  [119] = 119,
  [120] = 120,
  [121] = 105,
  [122] = 113,
  [123] = 123,
  [124] = 104,
  [125] = 107,
  [126] = 120,
  [127] = 123,
  [128] = 113,
  [129] = 119,
  [130] = 104,
  [131] = 107,
  [132] = 120,
  [133] = 123,
  [134] = 109,
  [135] = 116,
  [136] = 112,
  [137] = 100,
  [138] = 109,
  [139] = 116,
  [140] = 112,
  [141] = 100,
  [142] = 114,
  [143] = 114,
  [144] = 101,
  [145] = 101,
  [146] = 111,
  [147] = 111,
  [148] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      ADVANCE_MAP(
        '"', 7,
        '$', 74,
        '\'', 9,
        '(', 66,
        ')', 67,
        '-', 12,
        '/', 15,
        '<', 46,
        '=', 65,
        '>', 53,
        '`', 22,
        'c', 60,
        'l', 58,
        'v', 57,
        '{', 77,
        '|', 81,
        '}', 78,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '`') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(96);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3);
      if (lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(122);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(123);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 7,
        '$', 74,
        '\'', 9,
        '(', 66,
        ')', 67,
        '-', 12,
        '/', 17,
        '<', 52,
        '=', 65,
        '>', 53,
        '`', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(85);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(129);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(30);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == '|') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(34);
      END_STATE();
    case 35:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 36:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '<' ||
          lookahead == '{') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(107);
      if ((' ' <= lookahead && lookahead <= '"') ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(107);
      if ((' ' <= lookahead && lookahead <= '"') ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(107);
      if ((' ' <= lookahead && lookahead <= '"') ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(107);
      if ((' ' <= lookahead && lookahead <= '"') ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_node_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '<' ||
          lookahead == '{') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_html_inline_js);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_html_inline_js);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead == '{') ADVANCE(37);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(126);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOLLAR2);
      if (lookahead == ' ') ADVANCE(70);
      if (lookahead == '<') ADVANCE(119);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LTfor_PIPE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LTfor_PIPE);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_of_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfor_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_SLASHfor_GT);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_if_block_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_if_block_token1);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_if_block_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_SLASHif_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_SLASHif_GT);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_const_declaration);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_let_declaration);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_var_declaration);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_variable_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(48);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == ')') ADVANCE(68);
      if (lookahead == '`') ADVANCE(106);
      if (('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(122);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '{') ADVANCE(119);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(123);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '"') ADVANCE(119);
      if (lookahead == ' ' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(100);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(101);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '<' ||
          lookahead == '{') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '`') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(106);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '|') ADVANCE(80);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '<' ||
          lookahead == '{') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(119);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '|')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_any_text);
      if (lookahead == ' ' ||
          lookahead == '"' ||
          ('$' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= '}')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(120);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '<' || '?' < lookahead) &&
          (lookahead < '_' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(121);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '<' || '?' < lookahead) &&
          (lookahead < '_' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(98);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(122);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '<' || '?' < lookahead) &&
          (lookahead < '_' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '/') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(123);
      if (lookahead == '"' ||
          ('%' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('=' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '}') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '<' || '?' < lookahead) &&
          (lookahead < '_' || '}' < lookahead)) ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '/') ADVANCE(125);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '{') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 'c') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'v') ADVANCE(130);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__javascript_content);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__javascript_content);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(140);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 39},
  [63] = {.lex_state = 39},
  [64] = {.lex_state = 39},
  [65] = {.lex_state = 39},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 39},
  [68] = {.lex_state = 39},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 35},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 11},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 30},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 35},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 11},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 35},
  [136] = {.lex_state = 11},
  [137] = {.lex_state = 35},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 35},
  [142] = {.lex_state = 30},
  [143] = {.lex_state = 30},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 11},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym_node_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_html_inline_js] = ACTIONS(1),
    [anon_sym_DOLLAR2] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LTfor_PIPE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_if_block_token1] = ACTIONS(1),
    [sym_const_declaration] = ACTIONS(1),
    [sym_let_declaration] = ACTIONS(1),
    [sym_var_declaration] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [aux_sym_string_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(102),
    [sym__node] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_inline_comment] = STATE(8),
    [sym_element] = STATE(8),
    [sym_start_tag] = STATE(2),
    [sym_self_closing_tag] = STATE(39),
    [sym_inline_javascript_expression] = STATE(8),
    [sym_javascript_block] = STATE(8),
    [sym_for_block] = STATE(8),
    [sym_if_block] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_LT] = ACTIONS(9),
    [anon_sym_DOLLAR] = ACTIONS(11),
    [sym_html_inline_js] = ACTIONS(13),
    [anon_sym_DOLLAR2] = ACTIONS(15),
    [anon_sym_LTfor_PIPE] = ACTIONS(17),
    [aux_sym_if_block_token1] = ACTIONS(19),
    [sym_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(63), 1,
      sym_end_tag,
    ACTIONS(25), 2,
      sym_html_inline_js,
      sym_text,
    STATE(3), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [49] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(23), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(31), 1,
      sym_end_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    ACTIONS(27), 2,
      sym_html_inline_js,
      sym_text,
    STATE(14), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [98] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(73), 1,
      sym_end_tag,
    ACTIONS(27), 2,
      sym_html_inline_js,
      sym_text,
    STATE(14), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [147] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(52), 1,
      sym_end_tag,
    ACTIONS(27), 2,
      sym_html_inline_js,
      sym_text,
    STATE(14), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [196] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(69), 1,
      sym_end_tag,
    ACTIONS(33), 2,
      sym_html_inline_js,
      sym_text,
    STATE(4), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [245] = 13,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(21), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(31), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    STATE(49), 1,
      sym_end_tag,
    ACTIONS(35), 2,
      sym_html_inline_js,
      sym_text,
    STATE(5), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [294] = 12,
    ACTIONS(5), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      anon_sym_DOLLAR,
    ACTIONS(15), 1,
      anon_sym_DOLLAR2,
    ACTIONS(17), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(19), 1,
      aux_sym_if_block_token1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    ACTIONS(39), 2,
      sym_html_inline_js,
      sym_text,
    STATE(11), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [340] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(55), 1,
      anon_sym_LT_SLASHfor_GT,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(49), 2,
      sym_html_inline_js,
      sym_text,
    STATE(19), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [386] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(61), 1,
      anon_sym_LT_SLASHfor_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(59), 2,
      sym_html_inline_js,
      sym_text,
    STATE(9), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [432] = 12,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(68), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR2,
    ACTIONS(83), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(86), 1,
      aux_sym_if_block_token1,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    ACTIONS(77), 2,
      sym_html_inline_js,
      sym_text,
    STATE(11), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [478] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(93), 1,
      anon_sym_LT_SLASHif_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(91), 2,
      sym_html_inline_js,
      sym_text,
    STATE(15), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [524] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(97), 1,
      anon_sym_LT_SLASHif_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(95), 2,
      sym_html_inline_js,
      sym_text,
    STATE(12), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [570] = 12,
    ACTIONS(65), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(71), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR2,
    ACTIONS(83), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(86), 1,
      aux_sym_if_block_token1,
    ACTIONS(99), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(102), 1,
      anon_sym_LT_SLASH,
    STATE(2), 1,
      sym_start_tag,
    STATE(39), 1,
      sym_self_closing_tag,
    ACTIONS(104), 2,
      sym_html_inline_js,
      sym_text,
    STATE(14), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [616] = 12,
    ACTIONS(102), 1,
      anon_sym_LT_SLASHif_GT,
    ACTIONS(107), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(110), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DOLLAR2,
    ACTIONS(125), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(128), 1,
      aux_sym_if_block_token1,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(119), 2,
      sym_html_inline_js,
      sym_text,
    STATE(15), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [662] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(133), 1,
      anon_sym_LT_SLASHfor_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(131), 2,
      sym_html_inline_js,
      sym_text,
    STATE(20), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [708] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(137), 1,
      anon_sym_LT_SLASHif_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(135), 2,
      sym_html_inline_js,
      sym_text,
    STATE(18), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [754] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(139), 1,
      anon_sym_LT_SLASHif_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(91), 2,
      sym_html_inline_js,
      sym_text,
    STATE(15), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [800] = 12,
    ACTIONS(102), 1,
      anon_sym_LT_SLASHfor_GT,
    ACTIONS(107), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(113), 1,
      anon_sym_LT,
    ACTIONS(116), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_DOLLAR2,
    ACTIONS(125), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(128), 1,
      aux_sym_if_block_token1,
    ACTIONS(141), 1,
      anon_sym_SLASH_SLASH,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(144), 2,
      sym_html_inline_js,
      sym_text,
    STATE(19), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [846] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(147), 1,
      anon_sym_LT_SLASHfor_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(49), 2,
      sym_html_inline_js,
      sym_text,
    STATE(19), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [892] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(149), 1,
      anon_sym_LT_SLASHif_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(91), 2,
      sym_html_inline_js,
      sym_text,
    STATE(15), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [938] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(89), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(153), 1,
      anon_sym_LT_SLASHif_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(151), 2,
      sym_html_inline_js,
      sym_text,
    STATE(21), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [984] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(157), 1,
      anon_sym_LT_SLASHfor_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(155), 2,
      sym_html_inline_js,
      sym_text,
    STATE(24), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [1030] = 12,
    ACTIONS(41), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(43), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(45), 1,
      anon_sym_LT,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR2,
    ACTIONS(53), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(57), 1,
      aux_sym_if_block_token1,
    ACTIONS(159), 1,
      anon_sym_LT_SLASHfor_GT,
    STATE(7), 1,
      sym_start_tag,
    STATE(47), 1,
      sym_self_closing_tag,
    ACTIONS(49), 2,
      sym_html_inline_js,
      sym_text,
    STATE(19), 9,
      sym__node,
      sym_block_comment,
      sym_inline_comment,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_source_file_repeat1,
  [1076] = 10,
    ACTIONS(161), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(163), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_DOLLAR,
    ACTIONS(172), 1,
      anon_sym_DOLLAR2,
    ACTIONS(175), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(178), 1,
      aux_sym_if_block_token1,
    STATE(6), 1,
      sym_start_tag,
    STATE(71), 1,
      sym_self_closing_tag,
    ACTIONS(166), 2,
      sym_node_name,
      sym_html_inline_js,
    STATE(25), 6,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_block_comment_repeat1,
  [1113] = 10,
    ACTIONS(181), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(193), 1,
      aux_sym_if_block_token1,
    STATE(6), 1,
      sym_start_tag,
    STATE(71), 1,
      sym_self_closing_tag,
    ACTIONS(185), 2,
      sym_node_name,
      sym_html_inline_js,
    STATE(27), 6,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_block_comment_repeat1,
  [1150] = 10,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(193), 1,
      aux_sym_if_block_token1,
    ACTIONS(195), 1,
      anon_sym_DASH_DASH_GT,
    STATE(6), 1,
      sym_start_tag,
    STATE(71), 1,
      sym_self_closing_tag,
    ACTIONS(197), 2,
      sym_node_name,
      sym_html_inline_js,
    STATE(25), 6,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_block_comment_repeat1,
  [1187] = 10,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(193), 1,
      aux_sym_if_block_token1,
    ACTIONS(199), 1,
      anon_sym_DASH_DASH_GT,
    STATE(6), 1,
      sym_start_tag,
    STATE(71), 1,
      sym_self_closing_tag,
    ACTIONS(197), 2,
      sym_node_name,
      sym_html_inline_js,
    STATE(25), 6,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_block_comment_repeat1,
  [1224] = 10,
    ACTIONS(183), 1,
      anon_sym_LT,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(189), 1,
      anon_sym_DOLLAR2,
    ACTIONS(191), 1,
      anon_sym_LTfor_PIPE,
    ACTIONS(193), 1,
      aux_sym_if_block_token1,
    ACTIONS(201), 1,
      anon_sym_DASH_DASH_GT,
    STATE(6), 1,
      sym_start_tag,
    STATE(71), 1,
      sym_self_closing_tag,
    ACTIONS(203), 2,
      sym_node_name,
      sym_html_inline_js,
    STATE(28), 6,
      sym_element,
      sym_inline_javascript_expression,
      sym_javascript_block,
      sym_for_block,
      sym_if_block,
      aux_sym_block_comment_repeat1,
  [1261] = 2,
    ACTIONS(207), 1,
      sym_any_text,
    ACTIONS(205), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1277] = 2,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1293] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1309] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1325] = 2,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1341] = 3,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 1,
      sym_any_text,
    ACTIONS(205), 9,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1359] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1375] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1391] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1407] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1423] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1439] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1455] = 2,
    ACTIONS(227), 1,
      sym_any_text,
    ACTIONS(205), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1471] = 1,
    ACTIONS(253), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1485] = 1,
    ACTIONS(255), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1499] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1515] = 1,
    ACTIONS(259), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1529] = 1,
    ACTIONS(243), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1543] = 1,
    ACTIONS(261), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1557] = 1,
    ACTIONS(263), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1571] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1587] = 1,
    ACTIONS(267), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1601] = 1,
    ACTIONS(211), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1615] = 1,
    ACTIONS(215), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1629] = 1,
    ACTIONS(219), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1643] = 1,
    ACTIONS(223), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1657] = 1,
    ACTIONS(231), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1671] = 1,
    ACTIONS(235), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1685] = 1,
    ACTIONS(239), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1699] = 1,
    ACTIONS(247), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1713] = 1,
    ACTIONS(251), 11,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      anon_sym_LT_SLASHif_GT,
      sym_text,
  [1727] = 2,
    ACTIONS(207), 1,
      sym_any_text,
    ACTIONS(205), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      anon_sym_LT_SLASHfor_GT,
      aux_sym_if_block_token1,
      sym_text,
  [1743] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(261), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1759] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(263), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1775] = 2,
    ACTIONS(273), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1791] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1807] = 6,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(283), 1,
      sym_html_inline_js,
    STATE(95), 2,
      sym_attribute_function_call,
      sym_string,
    ACTIONS(277), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_node_name,
    ACTIONS(285), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [1831] = 1,
    ACTIONS(287), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1844] = 1,
    ACTIONS(289), 10,
      anon_sym_LT_BANG_DASH_DASH,
      anon_sym_SLASH_SLASH,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_DOLLAR2,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
      sym_text,
  [1857] = 2,
    ACTIONS(263), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(271), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1870] = 2,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(237), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1883] = 2,
    ACTIONS(243), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(241), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1896] = 2,
    ACTIONS(267), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(275), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1909] = 2,
    ACTIONS(211), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(209), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1922] = 2,
    ACTIONS(215), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(213), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1935] = 2,
    ACTIONS(219), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(217), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1948] = 2,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(221), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1961] = 2,
    ACTIONS(231), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(229), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1974] = 2,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(233), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [1987] = 2,
    ACTIONS(251), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(249), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [2000] = 2,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(245), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [2013] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_DOLLAR2,
    ACTIONS(269), 6,
      anon_sym_DASH_DASH_GT,
      sym_node_name,
      anon_sym_DOLLAR,
      sym_html_inline_js,
      anon_sym_LTfor_PIPE,
      aux_sym_if_block_token1,
  [2026] = 4,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym_html_inline_js,
    STATE(98), 2,
      sym_attribute_function_call,
      sym_string,
    ACTIONS(285), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2042] = 4,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(295), 1,
      sym_any_text,
    STATE(99), 1,
      sym_string,
    ACTIONS(297), 3,
      aux_sym_string_token1,
      aux_sym_string_token2,
      aux_sym_string_token3,
  [2057] = 4,
    ACTIONS(299), 1,
      anon_sym_GT,
    ACTIONS(301), 1,
      anon_sym_SLASH_GT,
    ACTIONS(303), 1,
      sym_node_name,
    STATE(87), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2071] = 4,
    ACTIONS(303), 1,
      sym_node_name,
    ACTIONS(305), 1,
      anon_sym_GT,
    ACTIONS(307), 1,
      anon_sym_SLASH_GT,
    STATE(84), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2085] = 3,
    ACTIONS(311), 1,
      sym__javascript_content,
    STATE(48), 1,
      sym_variable,
    ACTIONS(309), 3,
      sym_const_declaration,
      sym_let_declaration,
      sym_var_declaration,
  [2097] = 3,
    ACTIONS(315), 1,
      sym_node_name,
    ACTIONS(313), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(87), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2109] = 4,
    ACTIONS(303), 1,
      sym_node_name,
    ACTIONS(305), 1,
      anon_sym_GT,
    ACTIONS(318), 1,
      anon_sym_SLASH_GT,
    STATE(92), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2123] = 3,
    ACTIONS(322), 1,
      sym__javascript_content,
    STATE(62), 1,
      sym_variable,
    ACTIONS(320), 3,
      sym_const_declaration,
      sym_let_declaration,
      sym_var_declaration,
  [2135] = 3,
    ACTIONS(326), 1,
      sym__javascript_content,
    STATE(81), 1,
      sym_variable,
    ACTIONS(324), 3,
      sym_const_declaration,
      sym_let_declaration,
      sym_var_declaration,
  [2147] = 4,
    ACTIONS(303), 1,
      sym_node_name,
    ACTIONS(305), 1,
      anon_sym_GT,
    ACTIONS(328), 1,
      anon_sym_SLASH_GT,
    STATE(93), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2161] = 4,
    ACTIONS(299), 1,
      anon_sym_GT,
    ACTIONS(303), 1,
      sym_node_name,
    ACTIONS(330), 1,
      anon_sym_SLASH_GT,
    STATE(87), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2175] = 4,
    ACTIONS(299), 1,
      anon_sym_GT,
    ACTIONS(303), 1,
      sym_node_name,
    ACTIONS(332), 1,
      anon_sym_SLASH_GT,
    STATE(87), 2,
      sym_attribute,
      aux_sym_start_tag_repeat1,
  [2189] = 1,
    ACTIONS(334), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_node_name,
      anon_sym_RPAREN,
  [2196] = 1,
    ACTIONS(336), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_node_name,
  [2202] = 1,
    ACTIONS(338), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_node_name,
  [2208] = 1,
    ACTIONS(340), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_node_name,
  [2214] = 1,
    ACTIONS(342), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_node_name,
  [2220] = 1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [2224] = 1,
    ACTIONS(346), 1,
      sym__javascript_content,
  [2228] = 1,
    ACTIONS(348), 1,
      anon_sym_PIPE,
  [2232] = 1,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
  [2236] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
  [2240] = 1,
    ACTIONS(354), 1,
      aux_sym_if_block_token2,
  [2244] = 1,
    ACTIONS(356), 1,
      anon_sym_GT,
  [2248] = 1,
    ACTIONS(358), 1,
      sym_any_text,
  [2252] = 1,
    ACTIONS(360), 1,
      sym_node_name,
  [2256] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
  [2260] = 1,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
  [2264] = 1,
    ACTIONS(366), 1,
      sym_any_text,
  [2268] = 1,
    ACTIONS(368), 1,
      sym_variable_name,
  [2272] = 1,
    ACTIONS(370), 1,
      sym_variable_name,
  [2276] = 1,
    ACTIONS(372), 1,
      sym_node_name,
  [2280] = 1,
    ACTIONS(374), 1,
      anon_sym_of_EQ,
  [2284] = 1,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
  [2288] = 1,
    ACTIONS(378), 1,
      sym__javascript_content,
  [2292] = 1,
    ACTIONS(380), 1,
      anon_sym_GT,
  [2296] = 1,
    ACTIONS(382), 1,
      sym_any_text,
  [2300] = 1,
    ACTIONS(384), 1,
      sym_any_text,
  [2304] = 1,
    ACTIONS(386), 1,
      anon_sym_EQ,
  [2308] = 1,
    ACTIONS(388), 1,
      anon_sym_GT,
  [2312] = 1,
    ACTIONS(390), 1,
      sym_node_name,
  [2316] = 1,
    ACTIONS(392), 1,
      anon_sym_GT,
  [2320] = 1,
    ACTIONS(394), 1,
      aux_sym_if_block_token2,
  [2324] = 1,
    ACTIONS(396), 1,
      sym_node_name,
  [2328] = 1,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [2332] = 1,
    ACTIONS(400), 1,
      anon_sym_GT,
  [2336] = 1,
    ACTIONS(402), 1,
      sym_node_name,
  [2340] = 1,
    ACTIONS(404), 1,
      sym_any_text,
  [2344] = 1,
    ACTIONS(406), 1,
      aux_sym_if_block_token2,
  [2348] = 1,
    ACTIONS(408), 1,
      sym_node_name,
  [2352] = 1,
    ACTIONS(410), 1,
      anon_sym_EQ,
  [2356] = 1,
    ACTIONS(412), 1,
      anon_sym_GT,
  [2360] = 1,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
  [2364] = 1,
    ACTIONS(416), 1,
      sym__javascript_content,
  [2368] = 1,
    ACTIONS(418), 1,
      sym_variable_name,
  [2372] = 1,
    ACTIONS(420), 1,
      sym__javascript_content,
  [2376] = 1,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
  [2380] = 1,
    ACTIONS(424), 1,
      sym__javascript_content,
  [2384] = 1,
    ACTIONS(426), 1,
      sym_variable_name,
  [2388] = 1,
    ACTIONS(428), 1,
      sym__javascript_content,
  [2392] = 1,
    ACTIONS(430), 1,
      anon_sym_of_EQ,
  [2396] = 1,
    ACTIONS(432), 1,
      anon_sym_of_EQ,
  [2400] = 1,
    ACTIONS(434), 1,
      anon_sym_PIPE,
  [2404] = 1,
    ACTIONS(436), 1,
      anon_sym_PIPE,
  [2408] = 1,
    ACTIONS(438), 1,
      sym_variable_name,
  [2412] = 1,
    ACTIONS(440), 1,
      sym_variable_name,
  [2416] = 1,
    ACTIONS(442), 1,
      sym_any_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 147,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 294,
  [SMALL_STATE(9)] = 340,
  [SMALL_STATE(10)] = 386,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 478,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 570,
  [SMALL_STATE(15)] = 616,
  [SMALL_STATE(16)] = 662,
  [SMALL_STATE(17)] = 708,
  [SMALL_STATE(18)] = 754,
  [SMALL_STATE(19)] = 800,
  [SMALL_STATE(20)] = 846,
  [SMALL_STATE(21)] = 892,
  [SMALL_STATE(22)] = 938,
  [SMALL_STATE(23)] = 984,
  [SMALL_STATE(24)] = 1030,
  [SMALL_STATE(25)] = 1076,
  [SMALL_STATE(26)] = 1113,
  [SMALL_STATE(27)] = 1150,
  [SMALL_STATE(28)] = 1187,
  [SMALL_STATE(29)] = 1224,
  [SMALL_STATE(30)] = 1261,
  [SMALL_STATE(31)] = 1277,
  [SMALL_STATE(32)] = 1293,
  [SMALL_STATE(33)] = 1309,
  [SMALL_STATE(34)] = 1325,
  [SMALL_STATE(35)] = 1341,
  [SMALL_STATE(36)] = 1359,
  [SMALL_STATE(37)] = 1375,
  [SMALL_STATE(38)] = 1391,
  [SMALL_STATE(39)] = 1407,
  [SMALL_STATE(40)] = 1423,
  [SMALL_STATE(41)] = 1439,
  [SMALL_STATE(42)] = 1455,
  [SMALL_STATE(43)] = 1471,
  [SMALL_STATE(44)] = 1485,
  [SMALL_STATE(45)] = 1499,
  [SMALL_STATE(46)] = 1515,
  [SMALL_STATE(47)] = 1529,
  [SMALL_STATE(48)] = 1543,
  [SMALL_STATE(49)] = 1557,
  [SMALL_STATE(50)] = 1571,
  [SMALL_STATE(51)] = 1587,
  [SMALL_STATE(52)] = 1601,
  [SMALL_STATE(53)] = 1615,
  [SMALL_STATE(54)] = 1629,
  [SMALL_STATE(55)] = 1643,
  [SMALL_STATE(56)] = 1657,
  [SMALL_STATE(57)] = 1671,
  [SMALL_STATE(58)] = 1685,
  [SMALL_STATE(59)] = 1699,
  [SMALL_STATE(60)] = 1713,
  [SMALL_STATE(61)] = 1727,
  [SMALL_STATE(62)] = 1743,
  [SMALL_STATE(63)] = 1759,
  [SMALL_STATE(64)] = 1775,
  [SMALL_STATE(65)] = 1791,
  [SMALL_STATE(66)] = 1807,
  [SMALL_STATE(67)] = 1831,
  [SMALL_STATE(68)] = 1844,
  [SMALL_STATE(69)] = 1857,
  [SMALL_STATE(70)] = 1870,
  [SMALL_STATE(71)] = 1883,
  [SMALL_STATE(72)] = 1896,
  [SMALL_STATE(73)] = 1909,
  [SMALL_STATE(74)] = 1922,
  [SMALL_STATE(75)] = 1935,
  [SMALL_STATE(76)] = 1948,
  [SMALL_STATE(77)] = 1961,
  [SMALL_STATE(78)] = 1974,
  [SMALL_STATE(79)] = 1987,
  [SMALL_STATE(80)] = 2000,
  [SMALL_STATE(81)] = 2013,
  [SMALL_STATE(82)] = 2026,
  [SMALL_STATE(83)] = 2042,
  [SMALL_STATE(84)] = 2057,
  [SMALL_STATE(85)] = 2071,
  [SMALL_STATE(86)] = 2085,
  [SMALL_STATE(87)] = 2097,
  [SMALL_STATE(88)] = 2109,
  [SMALL_STATE(89)] = 2123,
  [SMALL_STATE(90)] = 2135,
  [SMALL_STATE(91)] = 2147,
  [SMALL_STATE(92)] = 2161,
  [SMALL_STATE(93)] = 2175,
  [SMALL_STATE(94)] = 2189,
  [SMALL_STATE(95)] = 2196,
  [SMALL_STATE(96)] = 2202,
  [SMALL_STATE(97)] = 2208,
  [SMALL_STATE(98)] = 2214,
  [SMALL_STATE(99)] = 2220,
  [SMALL_STATE(100)] = 2224,
  [SMALL_STATE(101)] = 2228,
  [SMALL_STATE(102)] = 2232,
  [SMALL_STATE(103)] = 2236,
  [SMALL_STATE(104)] = 2240,
  [SMALL_STATE(105)] = 2244,
  [SMALL_STATE(106)] = 2248,
  [SMALL_STATE(107)] = 2252,
  [SMALL_STATE(108)] = 2256,
  [SMALL_STATE(109)] = 2260,
  [SMALL_STATE(110)] = 2264,
  [SMALL_STATE(111)] = 2268,
  [SMALL_STATE(112)] = 2272,
  [SMALL_STATE(113)] = 2276,
  [SMALL_STATE(114)] = 2280,
  [SMALL_STATE(115)] = 2284,
  [SMALL_STATE(116)] = 2288,
  [SMALL_STATE(117)] = 2292,
  [SMALL_STATE(118)] = 2296,
  [SMALL_STATE(119)] = 2300,
  [SMALL_STATE(120)] = 2304,
  [SMALL_STATE(121)] = 2308,
  [SMALL_STATE(122)] = 2312,
  [SMALL_STATE(123)] = 2316,
  [SMALL_STATE(124)] = 2320,
  [SMALL_STATE(125)] = 2324,
  [SMALL_STATE(126)] = 2328,
  [SMALL_STATE(127)] = 2332,
  [SMALL_STATE(128)] = 2336,
  [SMALL_STATE(129)] = 2340,
  [SMALL_STATE(130)] = 2344,
  [SMALL_STATE(131)] = 2348,
  [SMALL_STATE(132)] = 2352,
  [SMALL_STATE(133)] = 2356,
  [SMALL_STATE(134)] = 2360,
  [SMALL_STATE(135)] = 2364,
  [SMALL_STATE(136)] = 2368,
  [SMALL_STATE(137)] = 2372,
  [SMALL_STATE(138)] = 2376,
  [SMALL_STATE(139)] = 2380,
  [SMALL_STATE(140)] = 2384,
  [SMALL_STATE(141)] = 2388,
  [SMALL_STATE(142)] = 2392,
  [SMALL_STATE(143)] = 2396,
  [SMALL_STATE(144)] = 2400,
  [SMALL_STATE(145)] = 2404,
  [SMALL_STATE(146)] = 2408,
  [SMALL_STATE(147)] = 2412,
  [SMALL_STATE(148)] = 2416,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(90),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 1, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript_block, 4, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript_block, 4, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 4, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_block, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_block, 5, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_block, 7, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_block, 7, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_block, 8, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_block, 8, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_javascript_expression, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_comment, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_javascript_expression, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_function_call, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_function_call, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [350] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_marko(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
