#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 375
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_LT = 2,
  anon_sym_GT = 3,
  anon_sym_LT_SLASH = 4,
  anon_sym_LT_SLASH_GT = 5,
  anon_sym_SLASH_GT = 6,
  sym__void_tag_name = 7,
  anon_sym_SLASH = 8,
  anon_sym_EQ = 9,
  sym_tag_name = 10,
  sym_shorthand_class = 11,
  sym_shorthand_id = 12,
  anon_sym_PIPE = 13,
  anon_sym_COMMA = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_if = 19,
  anon_sym_else_DASHif = 20,
  anon_sym_else = 21,
  anon_sym_for = 22,
  anon_sym_while = 23,
  anon_sym_macro = 24,
  anon_sym_LT_DOLLAR_LBRACE = 25,
  anon_sym_LT_SLASH_DOLLAR_LBRACE = 26,
  anon_sym_import = 27,
  anon_sym_static = 28,
  anon_sym_class = 29,
  anon_sym_style = 30,
  sym_style_language = 31,
  anon_sym_DOLLAR = 32,
  anon_sym_COLON_EQ = 33,
  sym_attribute_name = 34,
  anon_sym_DOT_DOT_DOT = 35,
  aux_sym_quoted_string_token1 = 36,
  aux_sym_quoted_string_token2 = 37,
  aux_sym_quoted_string_token3 = 38,
  sym_text = 39,
  anon_sym_DOLLAR_LBRACE = 40,
  anon_sym_LT_BANG_DASH_DASH = 41,
  anon_sym_DASH_DASH_GT = 42,
  sym_line_comment = 43,
  sym__raw_text = 44,
  sym__js_expression = 45,
  sym__js_paren_expression = 46,
  sym__js_line_expression = 47,
  sym_comment_content = 48,
  sym__js_import_line = 49,
  sym_source_file = 50,
  sym__definition = 51,
  sym__top_level_statement = 52,
  sym__node = 53,
  sym_element = 54,
  sym_start_tag = 55,
  sym_end_tag = 56,
  sym_self_closing_tag = 57,
  sym_void_element = 58,
  sym_tag_variable = 59,
  sym_tag_parameters = 60,
  sym__tag_param = 61,
  sym_destructured_param = 62,
  sym_tag_argument = 63,
  sym_if_tag = 64,
  sym_else_if_tag = 65,
  sym_else_tag = 66,
  sym_for_tag = 67,
  sym_while_tag = 68,
  sym_macro_tag = 69,
  sym_dynamic_element = 70,
  sym_dynamic_start_tag = 71,
  sym_dynamic_end_tag = 72,
  sym_dynamic_self_closing_tag = 73,
  sym_import_statement = 74,
  sym_static_statement = 75,
  sym_static_block = 76,
  sym_class_block = 77,
  sym_style_block = 78,
  sym_scriptlet_line = 79,
  sym_scriptlet_block = 80,
  sym_attribute = 81,
  sym_attribute_method_args = 82,
  sym_attribute_method_body = 83,
  sym_attribute_value = 84,
  sym_spread_attribute = 85,
  sym_quoted_string = 86,
  sym_inline_expression = 87,
  sym_html_comment = 88,
  aux_sym_source_file_repeat1 = 89,
  aux_sym_element_repeat1 = 90,
  aux_sym_start_tag_repeat1 = 91,
  aux_sym_start_tag_repeat2 = 92,
  aux_sym_tag_parameters_repeat1 = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [anon_sym_LT_SLASH_GT] = "</>",
  [anon_sym_SLASH_GT] = "/>",
  [sym__void_tag_name] = "tag_name",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [sym_tag_name] = "tag_name",
  [sym_shorthand_class] = "shorthand_class",
  [sym_shorthand_id] = "shorthand_id",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_else_DASHif] = "else-if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_while] = "while",
  [anon_sym_macro] = "macro",
  [anon_sym_LT_DOLLAR_LBRACE] = "<${",
  [anon_sym_LT_SLASH_DOLLAR_LBRACE] = "</${",
  [anon_sym_import] = "import",
  [anon_sym_static] = "static",
  [anon_sym_class] = "class",
  [anon_sym_style] = "style",
  [sym_style_language] = "style_language",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_COLON_EQ] = ":=",
  [sym_attribute_name] = "attribute_name",
  [anon_sym_DOT_DOT_DOT] = "...",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [aux_sym_quoted_string_token3] = "quoted_string_token3",
  [sym_text] = "text",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_LT_BANG_DASH_DASH] = "<!--",
  [anon_sym_DASH_DASH_GT] = "-->",
  [sym_line_comment] = "line_comment",
  [sym__raw_text] = "_raw_text",
  [sym__js_expression] = "_js_expression",
  [sym__js_paren_expression] = "_js_paren_expression",
  [sym__js_line_expression] = "_js_line_expression",
  [sym_comment_content] = "comment_content",
  [sym__js_import_line] = "_js_import_line",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__top_level_statement] = "_top_level_statement",
  [sym__node] = "_node",
  [sym_element] = "element",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_self_closing_tag] = "self_closing_tag",
  [sym_void_element] = "void_element",
  [sym_tag_variable] = "tag_variable",
  [sym_tag_parameters] = "tag_parameters",
  [sym__tag_param] = "_tag_param",
  [sym_destructured_param] = "destructured_param",
  [sym_tag_argument] = "tag_argument",
  [sym_if_tag] = "if_tag",
  [sym_else_if_tag] = "else_if_tag",
  [sym_else_tag] = "else_tag",
  [sym_for_tag] = "for_tag",
  [sym_while_tag] = "while_tag",
  [sym_macro_tag] = "macro_tag",
  [sym_dynamic_element] = "dynamic_element",
  [sym_dynamic_start_tag] = "dynamic_start_tag",
  [sym_dynamic_end_tag] = "dynamic_end_tag",
  [sym_dynamic_self_closing_tag] = "dynamic_self_closing_tag",
  [sym_import_statement] = "import_statement",
  [sym_static_statement] = "static_statement",
  [sym_static_block] = "static_block",
  [sym_class_block] = "class_block",
  [sym_style_block] = "style_block",
  [sym_scriptlet_line] = "scriptlet_line",
  [sym_scriptlet_block] = "scriptlet_block",
  [sym_attribute] = "attribute",
  [sym_attribute_method_args] = "attribute_method_args",
  [sym_attribute_method_body] = "attribute_method_body",
  [sym_attribute_value] = "attribute_value",
  [sym_spread_attribute] = "spread_attribute",
  [sym_quoted_string] = "quoted_string",
  [sym_inline_expression] = "inline_expression",
  [sym_html_comment] = "html_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_element_repeat1] = "element_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_start_tag_repeat2] = "start_tag_repeat2",
  [aux_sym_tag_parameters_repeat1] = "tag_parameters_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [anon_sym_LT_SLASH_GT] = anon_sym_LT_SLASH_GT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [sym__void_tag_name] = sym_tag_name,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_tag_name] = sym_tag_name,
  [sym_shorthand_class] = sym_shorthand_class,
  [sym_shorthand_id] = sym_shorthand_id,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else_DASHif] = anon_sym_else_DASHif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_LT_DOLLAR_LBRACE] = anon_sym_LT_DOLLAR_LBRACE,
  [anon_sym_LT_SLASH_DOLLAR_LBRACE] = anon_sym_LT_SLASH_DOLLAR_LBRACE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_style] = anon_sym_style,
  [sym_style_language] = sym_style_language,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [aux_sym_quoted_string_token3] = aux_sym_quoted_string_token3,
  [sym_text] = sym_text,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_LT_BANG_DASH_DASH] = anon_sym_LT_BANG_DASH_DASH,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [sym_line_comment] = sym_line_comment,
  [sym__raw_text] = sym__raw_text,
  [sym__js_expression] = sym__js_expression,
  [sym__js_paren_expression] = sym__js_paren_expression,
  [sym__js_line_expression] = sym__js_line_expression,
  [sym_comment_content] = sym_comment_content,
  [sym__js_import_line] = sym__js_import_line,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__top_level_statement] = sym__top_level_statement,
  [sym__node] = sym__node,
  [sym_element] = sym_element,
  [sym_start_tag] = sym_start_tag,
  [sym_end_tag] = sym_end_tag,
  [sym_self_closing_tag] = sym_self_closing_tag,
  [sym_void_element] = sym_void_element,
  [sym_tag_variable] = sym_tag_variable,
  [sym_tag_parameters] = sym_tag_parameters,
  [sym__tag_param] = sym__tag_param,
  [sym_destructured_param] = sym_destructured_param,
  [sym_tag_argument] = sym_tag_argument,
  [sym_if_tag] = sym_if_tag,
  [sym_else_if_tag] = sym_else_if_tag,
  [sym_else_tag] = sym_else_tag,
  [sym_for_tag] = sym_for_tag,
  [sym_while_tag] = sym_while_tag,
  [sym_macro_tag] = sym_macro_tag,
  [sym_dynamic_element] = sym_dynamic_element,
  [sym_dynamic_start_tag] = sym_dynamic_start_tag,
  [sym_dynamic_end_tag] = sym_dynamic_end_tag,
  [sym_dynamic_self_closing_tag] = sym_dynamic_self_closing_tag,
  [sym_import_statement] = sym_import_statement,
  [sym_static_statement] = sym_static_statement,
  [sym_static_block] = sym_static_block,
  [sym_class_block] = sym_class_block,
  [sym_style_block] = sym_style_block,
  [sym_scriptlet_line] = sym_scriptlet_line,
  [sym_scriptlet_block] = sym_scriptlet_block,
  [sym_attribute] = sym_attribute,
  [sym_attribute_method_args] = sym_attribute_method_args,
  [sym_attribute_method_body] = sym_attribute_method_body,
  [sym_attribute_value] = sym_attribute_value,
  [sym_spread_attribute] = sym_spread_attribute,
  [sym_quoted_string] = sym_quoted_string,
  [sym_inline_expression] = sym_inline_expression,
  [sym_html_comment] = sym_html_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_element_repeat1] = aux_sym_element_repeat1,
  [aux_sym_start_tag_repeat1] = aux_sym_start_tag_repeat1,
  [aux_sym_start_tag_repeat2] = aux_sym_start_tag_repeat2,
  [aux_sym_tag_parameters_repeat1] = aux_sym_tag_parameters_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_LT_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__void_tag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_class] = {
    .visible = true,
    .named = true,
  },
  [sym_shorthand_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else_DASHif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_style] = {
    .visible = true,
    .named = false,
  },
  [sym_style_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_BANG_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__raw_text] = {
    .visible = false,
    .named = true,
  },
  [sym__js_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__js_paren_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__js_line_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym__js_import_line] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
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
  [sym_void_element] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__tag_param] = {
    .visible = false,
    .named = true,
  },
  [sym_destructured_param] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_if_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_else_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_for_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_while_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_element] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_self_closing_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_static_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_static_block] = {
    .visible = true,
    .named = true,
  },
  [sym_class_block] = {
    .visible = true,
    .named = true,
  },
  [sym_style_block] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptlet_line] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptlet_block] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_method_args] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_method_body] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_spread_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_html_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_parameters_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 4,
  [10] = 10,
  [11] = 5,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 31,
  [35] = 32,
  [36] = 29,
  [37] = 14,
  [38] = 15,
  [39] = 16,
  [40] = 17,
  [41] = 19,
  [42] = 20,
  [43] = 21,
  [44] = 22,
  [45] = 23,
  [46] = 24,
  [47] = 25,
  [48] = 26,
  [49] = 27,
  [50] = 28,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 55,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
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
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 101,
  [112] = 81,
  [113] = 104,
  [114] = 105,
  [115] = 106,
  [116] = 107,
  [117] = 108,
  [118] = 109,
  [119] = 85,
  [120] = 65,
  [121] = 66,
  [122] = 67,
  [123] = 68,
  [124] = 69,
  [125] = 70,
  [126] = 71,
  [127] = 72,
  [128] = 76,
  [129] = 77,
  [130] = 78,
  [131] = 131,
  [132] = 84,
  [133] = 110,
  [134] = 86,
  [135] = 87,
  [136] = 88,
  [137] = 89,
  [138] = 90,
  [139] = 91,
  [140] = 61,
  [141] = 92,
  [142] = 93,
  [143] = 94,
  [144] = 95,
  [145] = 96,
  [146] = 97,
  [147] = 98,
  [148] = 99,
  [149] = 100,
  [150] = 102,
  [151] = 103,
  [152] = 82,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 157,
  [164] = 161,
  [165] = 153,
  [166] = 166,
  [167] = 160,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 172,
  [180] = 175,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 184,
  [191] = 182,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 185,
  [198] = 198,
  [199] = 199,
  [200] = 187,
  [201] = 188,
  [202] = 195,
  [203] = 183,
  [204] = 204,
  [205] = 189,
  [206] = 204,
  [207] = 207,
  [208] = 196,
  [209] = 198,
  [210] = 192,
  [211] = 193,
  [212] = 199,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 216,
  [223] = 221,
  [224] = 213,
  [225] = 217,
  [226] = 214,
  [227] = 215,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 249,
  [255] = 255,
  [256] = 243,
  [257] = 257,
  [258] = 258,
  [259] = 257,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 247,
  [264] = 253,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 265,
  [283] = 283,
  [284] = 280,
  [285] = 285,
  [286] = 275,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 267,
  [299] = 299,
  [300] = 276,
  [301] = 301,
  [302] = 291,
  [303] = 303,
  [304] = 268,
  [305] = 305,
  [306] = 272,
  [307] = 307,
  [308] = 303,
  [309] = 299,
  [310] = 301,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 266,
  [315] = 290,
  [316] = 316,
  [317] = 317,
  [318] = 278,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 293,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 270,
  [330] = 269,
  [331] = 331,
  [332] = 332,
  [333] = 277,
  [334] = 283,
  [335] = 335,
  [336] = 336,
  [337] = 279,
  [338] = 281,
  [339] = 331,
  [340] = 285,
  [341] = 341,
  [342] = 311,
  [343] = 343,
  [344] = 344,
  [345] = 335,
  [346] = 305,
  [347] = 332,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 317,
  [352] = 324,
  [353] = 312,
  [354] = 319,
  [355] = 322,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 321,
  [360] = 313,
  [361] = 336,
  [362] = 356,
  [363] = 357,
  [364] = 325,
  [365] = 320,
  [366] = 341,
  [367] = 296,
  [368] = 326,
  [369] = 297,
  [370] = 327,
  [371] = 371,
  [372] = 292,
  [373] = 328,
  [374] = 316,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '#', 218,
        '$', 188,
        '(', 161,
        ')', 162,
        ',', 158,
        '-', 196,
        '.', 197,
        '/', 45,
        ':', 199,
        '<', 36,
        '=', 47,
        '>', 39,
        '@', 217,
        'a', 87,
        'b', 48,
        'c', 76,
        'e', 79,
        'f', 84,
        'h', 88,
        'i', 69,
        'l', 71,
        'm', 50,
        'p', 55,
        's', 82,
        't', 91,
        'w', 56,
        '{', 159,
        '|', 157,
        '}', 160,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 2,
        '#', 32,
        '\'', 7,
        '(', 161,
        ')', 162,
        ',', 158,
        '-', 10,
        '.', 14,
        '/', 46,
        '=', 47,
        '>', 39,
        '`', 20,
        '{', 159,
        '|', 157,
        '}', 160,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == ':' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '{') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(223);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(222);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '@', 31,
        'a', 141,
        'b', 107,
        'c', 135,
        'e', 132,
        'f', 138,
        'h', 140,
        'i', 124,
        'l', 127,
        'm', 108,
        'p', 111,
        's', 136,
        't', 143,
        'w', 112,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 19:
      if (lookahead == '@') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 20:
      if (lookahead == '`') ADVANCE(195);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(159);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(28);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 29:
      if (lookahead == '{') ADVANCE(176);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(177);
      END_STATE();
    case 31:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 32:
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '$') ADVANCE(187);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 's') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (lookahead != 0) ADVANCE(219);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '/') ADVANCE(6);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '$') ADVANCE(29);
      if (lookahead == '/') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__void_tag_name);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(223);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '>') ADVANCE(43);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'y') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'a') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'h') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'k') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 's') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 's') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 't') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'g') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'u') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_shorthand_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_shorthand_class);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_shorthand_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_else_DASHif);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_DOLLAR_LBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_SLASH_DOLLAR_LBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_style);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_style);
      if (lookahead == '$') ADVANCE(224);
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_style_language);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_attribute_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_quoted_string_token3);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '.') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '=') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<' &&
          lookahead != '=') ADVANCE(219);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '>') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '<') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_BANG_DASH_DASH);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 33},
  [105] = {.lex_state = 33},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 33},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 33},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 5},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 18},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 8},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 1},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1, .external_lex_state = 2},
  [219] = {.lex_state = 1, .external_lex_state = 2},
  [220] = {.lex_state = 1, .external_lex_state = 2},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 28},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 28},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1, .external_lex_state = 3},
  [244] = {.lex_state = 1, .external_lex_state = 4},
  [245] = {.lex_state = 1, .external_lex_state = 5},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 1, .external_lex_state = 5},
  [250] = {.lex_state = 1, .external_lex_state = 4},
  [251] = {.lex_state = 1, .external_lex_state = 4},
  [252] = {.lex_state = 1, .external_lex_state = 4},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 1, .external_lex_state = 5},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1, .external_lex_state = 3},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 1, .external_lex_state = 4},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 1, .external_lex_state = 4},
  [261] = {.lex_state = 1, .external_lex_state = 6},
  [262] = {.lex_state = 1, .external_lex_state = 4},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 18},
  [270] = {.lex_state = 23},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 18},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 6},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 6},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 23},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 1},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 23},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 6},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 18},
  [317] = {.lex_state = 0, .external_lex_state = 6},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 19},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 23},
  [323] = {.lex_state = 23},
  [324] = {.lex_state = 18},
  [325] = {.lex_state = 18},
  [326] = {.lex_state = 18},
  [327] = {.lex_state = 23},
  [328] = {.lex_state = 18},
  [329] = {.lex_state = 23},
  [330] = {.lex_state = 18},
  [331] = {.lex_state = 18},
  [332] = {.lex_state = 23},
  [333] = {.lex_state = 18},
  [334] = {.lex_state = 23},
  [335] = {.lex_state = 23},
  [336] = {.lex_state = 23},
  [337] = {.lex_state = 0, .external_lex_state = 6},
  [338] = {.lex_state = 0, .external_lex_state = 6},
  [339] = {.lex_state = 18},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 1},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 0, .external_lex_state = 2},
  [344] = {.lex_state = 0, .external_lex_state = 7},
  [345] = {.lex_state = 23},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 23},
  [348] = {.lex_state = 28},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 0, .external_lex_state = 6},
  [351] = {.lex_state = 0, .external_lex_state = 6},
  [352] = {.lex_state = 18},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 19},
  [355] = {.lex_state = 23},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 1},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 1},
  [361] = {.lex_state = 23},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 1},
  [364] = {.lex_state = 18},
  [365] = {.lex_state = 1},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 18},
  [369] = {.lex_state = 1},
  [370] = {.lex_state = 23},
  [371] = {.lex_state = 1},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 18},
  [374] = {.lex_state = 18},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LT_SLASH_GT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [sym__void_tag_name] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [sym_shorthand_class] = ACTIONS(1),
    [sym_shorthand_id] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else_DASHif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_LT_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_LT_SLASH_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_style] = ACTIONS(1),
    [sym_style_language] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__raw_text] = ACTIONS(1),
    [sym__js_expression] = ACTIONS(1),
    [sym__js_paren_expression] = ACTIONS(1),
    [sym__js_line_expression] = ACTIONS(1),
    [sym_comment_content] = ACTIONS(1),
    [sym__js_import_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(358),
    [sym__definition] = STATE(3),
    [sym__top_level_statement] = STATE(3),
    [sym__node] = STATE(3),
    [sym_element] = STATE(3),
    [sym_start_tag] = STATE(12),
    [sym_self_closing_tag] = STATE(3),
    [sym_void_element] = STATE(3),
    [sym_if_tag] = STATE(3),
    [sym_else_if_tag] = STATE(3),
    [sym_else_tag] = STATE(3),
    [sym_for_tag] = STATE(3),
    [sym_while_tag] = STATE(3),
    [sym_macro_tag] = STATE(3),
    [sym_dynamic_element] = STATE(3),
    [sym_dynamic_start_tag] = STATE(5),
    [sym_dynamic_self_closing_tag] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym_static_statement] = STATE(3),
    [sym_static_block] = STATE(3),
    [sym_class_block] = STATE(3),
    [sym_style_block] = STATE(3),
    [sym_scriptlet_line] = STATE(3),
    [sym_scriptlet_block] = STATE(3),
    [sym_inline_expression] = STATE(3),
    [sym_html_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(5),
    [anon_sym_LT_DOLLAR_LBRACE] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_class] = ACTIONS(13),
    [anon_sym_style] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(21),
    [anon_sym_LT_BANG_DASH_DASH] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_LT,
    ACTIONS(32), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_static,
    ACTIONS(41), 1,
      anon_sym_class,
    ACTIONS(44), 1,
      anon_sym_style,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      sym_text,
    ACTIONS(53), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(59), 1,
      sym_line_comment,
    STATE(5), 1,
      sym_dynamic_start_tag,
    STATE(12), 1,
      sym_start_tag,
    STATE(2), 24,
      sym__definition,
      sym__top_level_statement,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_import_statement,
      sym_static_statement,
      sym_static_block,
      sym_class_block,
      sym_style_block,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [69] = 15,
    ACTIONS(5), 1,
      anon_sym_LT,
    ACTIONS(7), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_static,
    ACTIONS(13), 1,
      anon_sym_class,
    ACTIONS(15), 1,
      anon_sym_style,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_text,
    ACTIONS(66), 1,
      sym_line_comment,
    STATE(5), 1,
      sym_dynamic_start_tag,
    STATE(12), 1,
      sym_start_tag,
    STATE(2), 24,
      sym__definition,
      sym__top_level_statement,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_import_statement,
      sym_static_statement,
      sym_static_block,
      sym_class_block,
      sym_style_block,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_source_file_repeat1,
  [138] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
      anon_sym_LT_SLASH_GT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(69), 1,
      sym_dynamic_end_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [192] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(70), 1,
      anon_sym_LT_SLASH_GT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(74), 1,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(108), 1,
      sym_dynamic_end_tag,
    ACTIONS(84), 2,
      sym_text,
      sym_line_comment,
    STATE(4), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [246] = 11,
    ACTIONS(86), 1,
      anon_sym_LT,
    ACTIONS(89), 1,
      anon_sym_LT_SLASH,
    ACTIONS(93), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(105), 1,
      anon_sym_LT_BANG_DASH_DASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(91), 2,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
    ACTIONS(99), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [298] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(108), 1,
      anon_sym_LT_SLASH,
    ACTIONS(110), 1,
      anon_sym_LT_SLASH_GT,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(68), 1,
      sym_end_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [352] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LT_SLASH,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH_GT,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(123), 1,
      sym_end_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [406] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(116), 1,
      anon_sym_LT_SLASH_GT,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(124), 1,
      sym_dynamic_end_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [460] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(112), 1,
      anon_sym_LT_SLASH,
    ACTIONS(114), 1,
      anon_sym_LT_SLASH_GT,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(115), 1,
      sym_end_tag,
    ACTIONS(120), 2,
      sym_text,
      sym_line_comment,
    STATE(8), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [514] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(116), 1,
      anon_sym_LT_SLASH_GT,
    ACTIONS(118), 1,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(117), 1,
      sym_dynamic_end_tag,
    ACTIONS(122), 2,
      sym_text,
      sym_line_comment,
    STATE(9), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [568] = 12,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(108), 1,
      anon_sym_LT_SLASH,
    ACTIONS(110), 1,
      anon_sym_LT_SLASH_GT,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    STATE(106), 1,
      sym_end_tag,
    ACTIONS(124), 2,
      sym_text,
      sym_line_comment,
    STATE(7), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [622] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(126), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(128), 2,
      sym_text,
      sym_line_comment,
    STATE(47), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [670] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(130), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(132), 2,
      sym_text,
      sym_line_comment,
    STATE(22), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [718] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(134), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [766] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [814] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(136), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(138), 2,
      sym_text,
      sym_line_comment,
    STATE(23), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [862] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(140), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(142), 2,
      sym_text,
      sym_line_comment,
    STATE(25), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [910] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(144), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [958] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(144), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(146), 2,
      sym_text,
      sym_line_comment,
    STATE(26), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1006] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(148), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1054] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(150), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1102] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(152), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1150] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(152), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(154), 2,
      sym_text,
      sym_line_comment,
    STATE(28), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1198] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(156), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1246] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(158), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1294] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(158), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(160), 2,
      sym_text,
      sym_line_comment,
    STATE(52), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1342] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(162), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1390] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(164), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(166), 2,
      sym_text,
      sym_line_comment,
    STATE(21), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1438] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(168), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(170), 2,
      sym_text,
      sym_line_comment,
    STATE(15), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1486] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(172), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(174), 2,
      sym_text,
      sym_line_comment,
    STATE(16), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1534] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(176), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(178), 2,
      sym_text,
      sym_line_comment,
    STATE(19), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1582] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(180), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(182), 2,
      sym_text,
      sym_line_comment,
    STATE(38), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1630] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(184), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(186), 2,
      sym_text,
      sym_line_comment,
    STATE(39), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1678] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(188), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(190), 2,
      sym_text,
      sym_line_comment,
    STATE(41), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1726] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(192), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(194), 2,
      sym_text,
      sym_line_comment,
    STATE(43), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1774] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(196), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(198), 2,
      sym_text,
      sym_line_comment,
    STATE(44), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1822] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(200), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1870] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(202), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1918] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(202), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(204), 2,
      sym_text,
      sym_line_comment,
    STATE(45), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [1966] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(206), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2014] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(206), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(208), 2,
      sym_text,
      sym_line_comment,
    STATE(48), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2062] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(210), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2110] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(212), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2158] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2206] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(214), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(216), 2,
      sym_text,
      sym_line_comment,
    STATE(50), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2254] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(218), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2302] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(220), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2350] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(220), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(222), 2,
      sym_text,
      sym_line_comment,
    STATE(51), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2398] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(224), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2446] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(226), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2494] = 10,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(72), 1,
      anon_sym_LT_DOLLAR_LBRACE,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(82), 1,
      anon_sym_LT_BANG_DASH_DASH,
    ACTIONS(228), 1,
      anon_sym_LT_SLASH,
    STATE(10), 1,
      sym_start_tag,
    STATE(11), 1,
      sym_dynamic_start_tag,
    ACTIONS(78), 2,
      sym_text,
      sym_line_comment,
    STATE(6), 17,
      sym__node,
      sym_element,
      sym_self_closing_tag,
      sym_void_element,
      sym_if_tag,
      sym_else_if_tag,
      sym_else_tag,
      sym_for_tag,
      sym_while_tag,
      sym_macro_tag,
      sym_dynamic_element,
      sym_dynamic_self_closing_tag,
      sym_scriptlet_line,
      sym_scriptlet_block,
      sym_inline_expression,
      sym_html_comment,
      aux_sym_element_repeat1,
  [2542] = 14,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(232), 1,
      anon_sym_SLASH_GT,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(55), 1,
      aux_sym_start_tag_repeat1,
    STATE(56), 1,
      sym_tag_variable,
    STATE(157), 1,
      sym_tag_parameters,
    STATE(210), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(236), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(211), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2587] = 14,
    ACTIONS(230), 1,
      anon_sym_GT,
    ACTIONS(234), 1,
      anon_sym_SLASH,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(246), 1,
      anon_sym_SLASH_GT,
    STATE(58), 1,
      sym_tag_variable,
    STATE(59), 1,
      aux_sym_start_tag_repeat1,
    STATE(163), 1,
      sym_tag_parameters,
    STATE(192), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(248), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(193), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2632] = 12,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      anon_sym_SLASH_GT,
    STATE(153), 1,
      sym_tag_parameters,
    STATE(166), 1,
      aux_sym_start_tag_repeat1,
    STATE(208), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(254), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(185), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2671] = 12,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      anon_sym_SLASH_GT,
    STATE(57), 1,
      aux_sym_start_tag_repeat1,
    STATE(153), 1,
      sym_tag_parameters,
    STATE(208), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(256), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(185), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2710] = 12,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SLASH_GT,
    STATE(160), 1,
      sym_tag_parameters,
    STATE(166), 1,
      aux_sym_start_tag_repeat1,
    STATE(187), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(254), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(188), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2749] = 12,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_SLASH_GT,
    STATE(60), 1,
      aux_sym_start_tag_repeat1,
    STATE(165), 1,
      sym_tag_parameters,
    STATE(196), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(264), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(197), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2788] = 12,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_SLASH_GT,
    STATE(165), 1,
      sym_tag_parameters,
    STATE(166), 1,
      aux_sym_start_tag_repeat1,
    STATE(196), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(254), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(197), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2827] = 12,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      anon_sym_SLASH_GT,
    STATE(166), 1,
      aux_sym_start_tag_repeat1,
    STATE(167), 1,
      sym_tag_parameters,
    STATE(200), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(254), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    STATE(201), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [2866] = 2,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(268), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2883] = 2,
    ACTIONS(274), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2900] = 2,
    ACTIONS(278), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2917] = 2,
    ACTIONS(282), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2934] = 2,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2951] = 2,
    ACTIONS(290), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2968] = 2,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [2985] = 2,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(296), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3002] = 2,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(300), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3019] = 2,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(304), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3036] = 2,
    ACTIONS(310), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(308), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3053] = 2,
    ACTIONS(314), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(312), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3070] = 2,
    ACTIONS(318), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(316), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3087] = 2,
    ACTIONS(322), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(320), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3104] = 2,
    ACTIONS(326), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(324), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3121] = 2,
    ACTIONS(330), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(328), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3138] = 2,
    ACTIONS(334), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(332), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3155] = 2,
    ACTIONS(338), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(336), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3172] = 2,
    ACTIONS(342), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(340), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3189] = 2,
    ACTIONS(346), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(344), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3206] = 2,
    ACTIONS(350), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(348), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3223] = 2,
    ACTIONS(354), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(352), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3240] = 2,
    ACTIONS(358), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(356), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3257] = 2,
    ACTIONS(362), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(360), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3274] = 2,
    ACTIONS(366), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(364), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3291] = 2,
    ACTIONS(370), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(368), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3308] = 2,
    ACTIONS(374), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(372), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3325] = 2,
    ACTIONS(378), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(376), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3342] = 2,
    ACTIONS(382), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(380), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3359] = 2,
    ACTIONS(386), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(384), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3376] = 2,
    ACTIONS(390), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(388), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3393] = 2,
    ACTIONS(394), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(392), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3410] = 2,
    ACTIONS(398), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(396), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3427] = 2,
    ACTIONS(402), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(400), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3444] = 2,
    ACTIONS(406), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(404), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3461] = 2,
    ACTIONS(410), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(408), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3478] = 2,
    ACTIONS(414), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(412), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3495] = 2,
    ACTIONS(418), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(416), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3512] = 2,
    ACTIONS(422), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(420), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3529] = 2,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(424), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3546] = 2,
    ACTIONS(430), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(428), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3563] = 2,
    ACTIONS(434), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(432), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3580] = 2,
    ACTIONS(438), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(436), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3597] = 2,
    ACTIONS(442), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(440), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3614] = 2,
    ACTIONS(446), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(444), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3631] = 2,
    ACTIONS(450), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(448), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3648] = 2,
    ACTIONS(454), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(452), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3665] = 2,
    ACTIONS(458), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(456), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3682] = 2,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(460), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3699] = 2,
    ACTIONS(466), 3,
      anon_sym_LT,
      anon_sym_DOLLAR,
      sym_text,
    ACTIONS(464), 9,
      ts_builtin_sym_end,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_import,
      anon_sym_static,
      anon_sym_class,
      anon_sym_style,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3716] = 2,
    ACTIONS(430), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(428), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3731] = 2,
    ACTIONS(350), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(348), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3746] = 2,
    ACTIONS(442), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(440), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3761] = 2,
    ACTIONS(446), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(444), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3776] = 2,
    ACTIONS(450), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(448), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3791] = 2,
    ACTIONS(454), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(452), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3806] = 2,
    ACTIONS(458), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(456), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3821] = 2,
    ACTIONS(462), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(460), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3836] = 2,
    ACTIONS(366), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(364), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3851] = 2,
    ACTIONS(286), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(284), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3866] = 2,
    ACTIONS(290), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(288), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3881] = 2,
    ACTIONS(294), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(292), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3896] = 2,
    ACTIONS(298), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(296), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3911] = 2,
    ACTIONS(302), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(300), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3926] = 2,
    ACTIONS(306), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(304), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3941] = 2,
    ACTIONS(310), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(308), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3956] = 2,
    ACTIONS(314), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(312), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3971] = 2,
    ACTIONS(330), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(328), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [3986] = 2,
    ACTIONS(334), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(332), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4001] = 2,
    ACTIONS(338), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(336), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4016] = 7,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      sym_attribute_name,
    STATE(178), 1,
      sym_attribute_method_args,
    STATE(234), 1,
      sym_attribute_method_body,
    ACTIONS(470), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(468), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_DOT_DOT_DOT,
  [4041] = 2,
    ACTIONS(362), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(360), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4056] = 2,
    ACTIONS(466), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(464), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4071] = 2,
    ACTIONS(370), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(368), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4086] = 2,
    ACTIONS(374), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(372), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4101] = 2,
    ACTIONS(378), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(376), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4116] = 2,
    ACTIONS(382), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(380), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4131] = 2,
    ACTIONS(386), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(384), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4146] = 2,
    ACTIONS(390), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(388), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4161] = 2,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(268), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4176] = 2,
    ACTIONS(394), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(392), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4191] = 2,
    ACTIONS(398), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(396), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4206] = 2,
    ACTIONS(402), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(400), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4221] = 2,
    ACTIONS(406), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(404), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4236] = 2,
    ACTIONS(410), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(408), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4251] = 2,
    ACTIONS(414), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(412), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4266] = 2,
    ACTIONS(418), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(416), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4281] = 2,
    ACTIONS(422), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(420), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4296] = 2,
    ACTIONS(426), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(424), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4311] = 2,
    ACTIONS(434), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(432), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4326] = 2,
    ACTIONS(438), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(436), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4341] = 2,
    ACTIONS(354), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(352), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4356] = 8,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SLASH_GT,
    STATE(187), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(188), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4382] = 2,
    ACTIONS(478), 2,
      anon_sym_LT,
      anon_sym_DOLLAR,
    ACTIONS(480), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4396] = 2,
    ACTIONS(482), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(484), 6,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4410] = 2,
    ACTIONS(488), 1,
      anon_sym_EQ,
    ACTIONS(486), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_shorthand_class,
      sym_shorthand_id,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [4424] = 8,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      anon_sym_SLASH_GT,
    STATE(208), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(185), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4450] = 2,
    ACTIONS(490), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(492), 6,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4464] = 2,
    ACTIONS(494), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(496), 6,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4478] = 8,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(500), 1,
      anon_sym_SLASH_GT,
    STATE(206), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(183), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4504] = 8,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(502), 1,
      anon_sym_GT,
    ACTIONS(504), 1,
      anon_sym_SLASH_GT,
    STATE(209), 1,
      sym_tag_parameters,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(212), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4530] = 2,
    ACTIONS(506), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(508), 6,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4544] = 8,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_SLASH_GT,
    STATE(196), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(197), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4570] = 8,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(502), 1,
      anon_sym_GT,
    ACTIONS(510), 1,
      anon_sym_SLASH_GT,
    STATE(198), 1,
      sym_tag_parameters,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(199), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4596] = 8,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      anon_sym_SLASH_GT,
    STATE(200), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(201), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4622] = 3,
    STATE(166), 1,
      aux_sym_start_tag_repeat1,
    ACTIONS(514), 2,
      sym_shorthand_class,
      sym_shorthand_id,
    ACTIONS(512), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [4638] = 8,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
    STATE(204), 1,
      sym_tag_argument,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(203), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4664] = 2,
    ACTIONS(519), 2,
      anon_sym_LT,
      anon_sym_DOLLAR,
    ACTIONS(521), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4678] = 2,
    ACTIONS(523), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(525), 6,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4692] = 2,
    ACTIONS(527), 3,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      anon_sym_DOLLAR,
    ACTIONS(529), 6,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4706] = 2,
    ACTIONS(531), 2,
      anon_sym_LT,
      anon_sym_DOLLAR,
    ACTIONS(533), 7,
      anon_sym_LT_SLASH_GT,
      anon_sym_LT_DOLLAR_LBRACE,
      anon_sym_LT_SLASH_DOLLAR_LBRACE,
      sym_text,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_LT_BANG_DASH_DASH,
      sym_line_comment,
  [4720] = 8,
    ACTIONS(535), 1,
      sym__void_tag_name,
    ACTIONS(537), 1,
      sym_tag_name,
    ACTIONS(539), 1,
      anon_sym_if,
    ACTIONS(541), 1,
      anon_sym_else_DASHif,
    ACTIONS(543), 1,
      anon_sym_else,
    ACTIONS(545), 1,
      anon_sym_for,
    ACTIONS(547), 1,
      anon_sym_while,
    ACTIONS(549), 1,
      anon_sym_macro,
  [4745] = 7,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(551), 1,
      anon_sym_GT,
    STATE(223), 1,
      sym_tag_parameters,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(222), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4768] = 7,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(553), 1,
      anon_sym_GT,
    STATE(221), 1,
      sym_tag_parameters,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(216), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4791] = 7,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(555), 1,
      anon_sym_GT,
    STATE(217), 1,
      sym_tag_parameters,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(224), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4814] = 1,
    ACTIONS(557), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_shorthand_class,
      sym_shorthand_id,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [4825] = 1,
    ACTIONS(559), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_shorthand_class,
      sym_shorthand_id,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [4836] = 5,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(565), 1,
      sym_attribute_name,
    STATE(233), 1,
      sym_attribute_method_body,
    ACTIONS(563), 2,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
    ACTIONS(561), 3,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_DOT_DOT_DOT,
  [4855] = 8,
    ACTIONS(567), 1,
      sym__void_tag_name,
    ACTIONS(569), 1,
      sym_tag_name,
    ACTIONS(571), 1,
      anon_sym_if,
    ACTIONS(573), 1,
      anon_sym_else_DASHif,
    ACTIONS(575), 1,
      anon_sym_else,
    ACTIONS(577), 1,
      anon_sym_for,
    ACTIONS(579), 1,
      anon_sym_while,
    ACTIONS(581), 1,
      anon_sym_macro,
  [4880] = 7,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(583), 1,
      anon_sym_GT,
    STATE(225), 1,
      sym_tag_parameters,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(213), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4903] = 1,
    ACTIONS(585), 8,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_shorthand_class,
      sym_shorthand_id,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [4914] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(587), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4932] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(589), 1,
      anon_sym_GT,
    ACTIONS(591), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4952] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(593), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(182), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4970] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [4990] = 2,
    ACTIONS(597), 1,
      sym_attribute_name,
    ACTIONS(595), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_DOT_DOT_DOT,
  [5002] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(500), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(183), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5022] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(500), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5042] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(599), 1,
      anon_sym_GT,
    ACTIONS(601), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5062] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(603), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(191), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5080] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(605), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5098] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(197), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5118] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(262), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5138] = 5,
    ACTIONS(609), 1,
      sym_attribute_name,
    ACTIONS(612), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(235), 1,
      sym_spread_attribute,
    ACTIONS(607), 2,
      anon_sym_GT,
      anon_sym_SLASH_GT,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5156] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(615), 1,
      anon_sym_GT,
    ACTIONS(617), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5176] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(201), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5196] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5216] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(621), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(202), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5236] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(621), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5256] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(203), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5276] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(498), 1,
      anon_sym_GT,
    ACTIONS(517), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5296] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(615), 1,
      anon_sym_GT,
    ACTIONS(623), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5316] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(589), 1,
      anon_sym_GT,
    ACTIONS(625), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5336] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(589), 1,
      anon_sym_GT,
    ACTIONS(625), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(205), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5356] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(599), 1,
      anon_sym_GT,
    ACTIONS(627), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5376] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(589), 1,
      anon_sym_GT,
    ACTIONS(591), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(189), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5396] = 2,
    ACTIONS(631), 1,
      sym_attribute_name,
    ACTIONS(629), 6,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_COLON_EQ,
      anon_sym_DOT_DOT_DOT,
  [5408] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(258), 1,
      anon_sym_GT,
    ACTIONS(260), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(188), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5428] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(195), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5448] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(185), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5468] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(250), 1,
      anon_sym_GT,
    ACTIONS(252), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5488] = 6,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(619), 1,
      anon_sym_GT,
    ACTIONS(633), 1,
      anon_sym_SLASH_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5508] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(635), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5525] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(637), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5542] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(639), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5559] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5576] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(215), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5593] = 4,
    ACTIONS(647), 1,
      sym__js_expression,
    STATE(176), 1,
      sym_quoted_string,
    STATE(238), 1,
      sym_attribute_value,
    ACTIONS(645), 3,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
      aux_sym_quoted_string_token3,
  [5608] = 4,
    ACTIONS(647), 1,
      sym__js_expression,
    STATE(176), 1,
      sym_quoted_string,
    STATE(181), 1,
      sym_attribute_value,
    ACTIONS(645), 3,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
      aux_sym_quoted_string_token3,
  [5623] = 4,
    ACTIONS(647), 1,
      sym__js_expression,
    STATE(176), 1,
      sym_quoted_string,
    STATE(233), 1,
      sym_attribute_value,
    ACTIONS(645), 3,
      aux_sym_quoted_string_token1,
      aux_sym_quoted_string_token2,
      aux_sym_quoted_string_token3,
  [5638] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(214), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5655] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(649), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5672] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(649), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(226), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5689] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(643), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5706] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(635), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(227), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5723] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(651), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5740] = 5,
    ACTIONS(242), 1,
      sym_attribute_name,
    ACTIONS(244), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(653), 1,
      anon_sym_GT,
    STATE(235), 1,
      sym_spread_attribute,
    STATE(194), 2,
      sym_attribute,
      aux_sym_start_tag_repeat2,
  [5757] = 1,
    ACTIONS(655), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5765] = 1,
    ACTIONS(657), 5,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      anon_sym_LPAREN,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5773] = 1,
    ACTIONS(659), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5780] = 3,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    STATE(246), 2,
      sym__tag_param,
      sym_destructured_param,
  [5791] = 1,
    ACTIONS(665), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5798] = 1,
    ACTIONS(667), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5805] = 1,
    ACTIONS(561), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5812] = 1,
    ACTIONS(468), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5819] = 1,
    ACTIONS(669), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5826] = 3,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
    ACTIONS(671), 1,
      sym_identifier,
    STATE(241), 2,
      sym__tag_param,
      sym_destructured_param,
  [5837] = 1,
    ACTIONS(673), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5844] = 1,
    ACTIONS(675), 4,
      anon_sym_GT,
      anon_sym_SLASH_GT,
      sym_attribute_name,
      anon_sym_DOT_DOT_DOT,
  [5851] = 3,
    ACTIONS(677), 1,
      anon_sym_PIPE,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_tag_parameters_repeat1,
  [5861] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_PIPE,
    STATE(240), 1,
      aux_sym_tag_parameters_repeat1,
  [5871] = 3,
    ACTIONS(683), 1,
      anon_sym_PIPE,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_tag_parameters_repeat1,
  [5881] = 2,
    ACTIONS(688), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(690), 1,
      sym_comment_content,
  [5888] = 2,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
    ACTIONS(694), 1,
      sym__raw_text,
  [5895] = 2,
    ACTIONS(696), 1,
      anon_sym_LBRACE,
    ACTIONS(698), 1,
      sym__js_line_expression,
  [5902] = 1,
    ACTIONS(683), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [5907] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_tag_argument,
  [5914] = 2,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    ACTIONS(702), 1,
      sym_style_language,
  [5921] = 2,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      sym__js_line_expression,
  [5928] = 2,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    ACTIONS(710), 1,
      sym__raw_text,
  [5935] = 2,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      sym__raw_text,
  [5942] = 2,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      sym__raw_text,
  [5949] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(357), 1,
      sym_tag_argument,
  [5956] = 2,
    ACTIONS(720), 1,
      anon_sym_LBRACE,
    ACTIONS(722), 1,
      sym__js_line_expression,
  [5963] = 1,
    ACTIONS(724), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [5968] = 2,
    ACTIONS(726), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(728), 1,
      sym_comment_content,
  [5975] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(366), 1,
      sym_tag_argument,
  [5982] = 2,
    ACTIONS(730), 1,
      anon_sym_RBRACE,
    ACTIONS(732), 1,
      sym__raw_text,
  [5989] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(341), 1,
      sym_tag_argument,
  [5996] = 2,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 1,
      sym__raw_text,
  [6003] = 2,
    ACTIONS(738), 1,
      anon_sym_RPAREN,
    ACTIONS(740), 1,
      sym__js_paren_expression,
  [6010] = 2,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    ACTIONS(744), 1,
      sym__raw_text,
  [6017] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(362), 1,
      sym_tag_argument,
  [6024] = 2,
    ACTIONS(240), 1,
      anon_sym_LPAREN,
    STATE(363), 1,
      sym_tag_argument,
  [6031] = 1,
    ACTIONS(746), 1,
      anon_sym_GT,
  [6035] = 1,
    ACTIONS(748), 1,
      anon_sym_GT,
  [6039] = 1,
    ACTIONS(750), 1,
      anon_sym_GT,
  [6043] = 1,
    ACTIONS(752), 1,
      anon_sym_GT,
  [6047] = 1,
    ACTIONS(754), 1,
      anon_sym_if,
  [6051] = 1,
    ACTIONS(756), 1,
      anon_sym_macro,
  [6055] = 1,
    ACTIONS(758), 1,
      anon_sym_LBRACE,
  [6059] = 1,
    ACTIONS(760), 1,
      anon_sym_GT,
  [6063] = 1,
    ACTIONS(762), 1,
      anon_sym_LBRACE,
  [6067] = 1,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [6071] = 1,
    ACTIONS(766), 1,
      anon_sym_RBRACE,
  [6075] = 1,
    ACTIONS(768), 1,
      anon_sym_DASH_DASH_GT,
  [6079] = 1,
    ACTIONS(770), 1,
      anon_sym_while,
  [6083] = 1,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
  [6087] = 1,
    ACTIONS(774), 1,
      sym__js_paren_expression,
  [6091] = 1,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
  [6095] = 1,
    ACTIONS(778), 1,
      sym__js_paren_expression,
  [6099] = 1,
    ACTIONS(780), 1,
      anon_sym_GT,
  [6103] = 1,
    ACTIONS(782), 1,
      anon_sym_macro,
  [6107] = 1,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
  [6111] = 1,
    ACTIONS(786), 1,
      anon_sym_GT,
  [6115] = 1,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
  [6119] = 1,
    ACTIONS(790), 1,
      anon_sym_RPAREN,
  [6123] = 1,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
  [6127] = 1,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
  [6131] = 1,
    ACTIONS(794), 1,
      anon_sym_GT,
  [6135] = 1,
    ACTIONS(796), 1,
      anon_sym_GT,
  [6139] = 1,
    ACTIONS(798), 1,
      anon_sym_GT,
  [6143] = 1,
    ACTIONS(800), 1,
      anon_sym_macro,
  [6147] = 1,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
  [6151] = 1,
    ACTIONS(804), 1,
      sym__js_paren_expression,
  [6155] = 1,
    ACTIONS(806), 1,
      anon_sym_GT,
  [6159] = 1,
    ACTIONS(808), 1,
      anon_sym_GT,
  [6163] = 1,
    ACTIONS(810), 1,
      anon_sym_GT,
  [6167] = 1,
    ACTIONS(812), 1,
      anon_sym_GT,
  [6171] = 1,
    ACTIONS(814), 1,
      anon_sym_DASH_DASH_GT,
  [6175] = 1,
    ACTIONS(816), 1,
      anon_sym_GT,
  [6179] = 1,
    ACTIONS(818), 1,
      anon_sym_GT,
  [6183] = 1,
    ACTIONS(820), 1,
      anon_sym_GT,
  [6187] = 1,
    ACTIONS(822), 1,
      anon_sym_GT,
  [6191] = 1,
    ACTIONS(824), 1,
      anon_sym_GT,
  [6195] = 1,
    ACTIONS(826), 1,
      anon_sym_GT,
  [6199] = 1,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
  [6203] = 1,
    ACTIONS(830), 1,
      anon_sym_GT,
  [6207] = 1,
    ACTIONS(832), 1,
      anon_sym_GT,
  [6211] = 1,
    ACTIONS(834), 1,
      anon_sym_GT,
  [6215] = 1,
    ACTIONS(836), 1,
      anon_sym_GT,
  [6219] = 1,
    ACTIONS(838), 1,
      anon_sym_GT,
  [6223] = 1,
    ACTIONS(840), 1,
      anon_sym_GT,
  [6227] = 1,
    ACTIONS(842), 1,
      anon_sym_GT,
  [6231] = 1,
    ACTIONS(844), 1,
      anon_sym_GT,
  [6235] = 1,
    ACTIONS(846), 1,
      anon_sym_else,
  [6239] = 1,
    ACTIONS(848), 1,
      sym__js_paren_expression,
  [6243] = 1,
    ACTIONS(850), 1,
      anon_sym_RBRACE,
  [6247] = 1,
    ACTIONS(852), 1,
      sym_tag_name,
  [6251] = 1,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [6255] = 1,
    ACTIONS(856), 1,
      anon_sym_GT,
  [6259] = 1,
    ACTIONS(858), 1,
      anon_sym_for,
  [6263] = 1,
    ACTIONS(860), 1,
      anon_sym_macro,
  [6267] = 1,
    ACTIONS(862), 1,
      anon_sym_if,
  [6271] = 1,
    ACTIONS(864), 1,
      anon_sym_else_DASHif,
  [6275] = 1,
    ACTIONS(866), 1,
      anon_sym_else,
  [6279] = 1,
    ACTIONS(868), 1,
      anon_sym_for,
  [6283] = 1,
    ACTIONS(870), 1,
      anon_sym_while,
  [6287] = 1,
    ACTIONS(872), 1,
      anon_sym_macro,
  [6291] = 1,
    ACTIONS(874), 1,
      anon_sym_if,
  [6295] = 1,
    ACTIONS(876), 1,
      anon_sym_else_DASHif,
  [6299] = 1,
    ACTIONS(878), 1,
      anon_sym_for,
  [6303] = 1,
    ACTIONS(880), 1,
      anon_sym_while,
  [6307] = 1,
    ACTIONS(882), 1,
      anon_sym_macro,
  [6311] = 1,
    ACTIONS(884), 1,
      anon_sym_for,
  [6315] = 1,
    ACTIONS(886), 1,
      anon_sym_macro,
  [6319] = 1,
    ACTIONS(888), 1,
      sym__js_paren_expression,
  [6323] = 1,
    ACTIONS(890), 1,
      sym__js_paren_expression,
  [6327] = 1,
    ACTIONS(892), 1,
      anon_sym_else_DASHif,
  [6331] = 1,
    ACTIONS(894), 1,
      anon_sym_GT,
  [6335] = 1,
    ACTIONS(896), 1,
      anon_sym_GT,
  [6339] = 1,
    ACTIONS(898), 1,
      anon_sym_GT,
  [6343] = 1,
    ACTIONS(900), 1,
      sym__js_expression,
  [6347] = 1,
    ACTIONS(902), 1,
      sym__js_import_line,
  [6351] = 1,
    ACTIONS(904), 1,
      anon_sym_for,
  [6355] = 1,
    ACTIONS(906), 1,
      anon_sym_GT,
  [6359] = 1,
    ACTIONS(908), 1,
      anon_sym_for,
  [6363] = 1,
    ACTIONS(910), 1,
      sym_identifier,
  [6367] = 1,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [6371] = 1,
    ACTIONS(914), 1,
      sym__js_paren_expression,
  [6375] = 1,
    ACTIONS(916), 1,
      sym__js_paren_expression,
  [6379] = 1,
    ACTIONS(918), 1,
      anon_sym_if,
  [6383] = 1,
    ACTIONS(920), 1,
      anon_sym_GT,
  [6387] = 1,
    ACTIONS(922), 1,
      sym_tag_name,
  [6391] = 1,
    ACTIONS(924), 1,
      anon_sym_for,
  [6395] = 1,
    ACTIONS(926), 1,
      anon_sym_GT,
  [6399] = 1,
    ACTIONS(928), 1,
      anon_sym_GT,
  [6403] = 1,
    ACTIONS(930), 1,
      ts_builtin_sym_end,
  [6407] = 1,
    ACTIONS(932), 1,
      anon_sym_GT,
  [6411] = 1,
    ACTIONS(934), 1,
      anon_sym_GT,
  [6415] = 1,
    ACTIONS(936), 1,
      anon_sym_macro,
  [6419] = 1,
    ACTIONS(938), 1,
      anon_sym_GT,
  [6423] = 1,
    ACTIONS(940), 1,
      anon_sym_GT,
  [6427] = 1,
    ACTIONS(942), 1,
      anon_sym_else_DASHif,
  [6431] = 1,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
  [6435] = 1,
    ACTIONS(946), 1,
      anon_sym_GT,
  [6439] = 1,
    ACTIONS(948), 1,
      anon_sym_GT,
  [6443] = 1,
    ACTIONS(950), 1,
      anon_sym_else,
  [6447] = 1,
    ACTIONS(952), 1,
      anon_sym_GT,
  [6451] = 1,
    ACTIONS(954), 1,
      anon_sym_for,
  [6455] = 1,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
  [6459] = 1,
    ACTIONS(958), 1,
      anon_sym_GT,
  [6463] = 1,
    ACTIONS(960), 1,
      anon_sym_while,
  [6467] = 1,
    ACTIONS(962), 1,
      anon_sym_else,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 69,
  [SMALL_STATE(4)] = 138,
  [SMALL_STATE(5)] = 192,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 298,
  [SMALL_STATE(8)] = 352,
  [SMALL_STATE(9)] = 406,
  [SMALL_STATE(10)] = 460,
  [SMALL_STATE(11)] = 514,
  [SMALL_STATE(12)] = 568,
  [SMALL_STATE(13)] = 622,
  [SMALL_STATE(14)] = 670,
  [SMALL_STATE(15)] = 718,
  [SMALL_STATE(16)] = 766,
  [SMALL_STATE(17)] = 814,
  [SMALL_STATE(18)] = 862,
  [SMALL_STATE(19)] = 910,
  [SMALL_STATE(20)] = 958,
  [SMALL_STATE(21)] = 1006,
  [SMALL_STATE(22)] = 1054,
  [SMALL_STATE(23)] = 1102,
  [SMALL_STATE(24)] = 1150,
  [SMALL_STATE(25)] = 1198,
  [SMALL_STATE(26)] = 1246,
  [SMALL_STATE(27)] = 1294,
  [SMALL_STATE(28)] = 1342,
  [SMALL_STATE(29)] = 1390,
  [SMALL_STATE(30)] = 1438,
  [SMALL_STATE(31)] = 1486,
  [SMALL_STATE(32)] = 1534,
  [SMALL_STATE(33)] = 1582,
  [SMALL_STATE(34)] = 1630,
  [SMALL_STATE(35)] = 1678,
  [SMALL_STATE(36)] = 1726,
  [SMALL_STATE(37)] = 1774,
  [SMALL_STATE(38)] = 1822,
  [SMALL_STATE(39)] = 1870,
  [SMALL_STATE(40)] = 1918,
  [SMALL_STATE(41)] = 1966,
  [SMALL_STATE(42)] = 2014,
  [SMALL_STATE(43)] = 2062,
  [SMALL_STATE(44)] = 2110,
  [SMALL_STATE(45)] = 2158,
  [SMALL_STATE(46)] = 2206,
  [SMALL_STATE(47)] = 2254,
  [SMALL_STATE(48)] = 2302,
  [SMALL_STATE(49)] = 2350,
  [SMALL_STATE(50)] = 2398,
  [SMALL_STATE(51)] = 2446,
  [SMALL_STATE(52)] = 2494,
  [SMALL_STATE(53)] = 2542,
  [SMALL_STATE(54)] = 2587,
  [SMALL_STATE(55)] = 2632,
  [SMALL_STATE(56)] = 2671,
  [SMALL_STATE(57)] = 2710,
  [SMALL_STATE(58)] = 2749,
  [SMALL_STATE(59)] = 2788,
  [SMALL_STATE(60)] = 2827,
  [SMALL_STATE(61)] = 2866,
  [SMALL_STATE(62)] = 2883,
  [SMALL_STATE(63)] = 2900,
  [SMALL_STATE(64)] = 2917,
  [SMALL_STATE(65)] = 2934,
  [SMALL_STATE(66)] = 2951,
  [SMALL_STATE(67)] = 2968,
  [SMALL_STATE(68)] = 2985,
  [SMALL_STATE(69)] = 3002,
  [SMALL_STATE(70)] = 3019,
  [SMALL_STATE(71)] = 3036,
  [SMALL_STATE(72)] = 3053,
  [SMALL_STATE(73)] = 3070,
  [SMALL_STATE(74)] = 3087,
  [SMALL_STATE(75)] = 3104,
  [SMALL_STATE(76)] = 3121,
  [SMALL_STATE(77)] = 3138,
  [SMALL_STATE(78)] = 3155,
  [SMALL_STATE(79)] = 3172,
  [SMALL_STATE(80)] = 3189,
  [SMALL_STATE(81)] = 3206,
  [SMALL_STATE(82)] = 3223,
  [SMALL_STATE(83)] = 3240,
  [SMALL_STATE(84)] = 3257,
  [SMALL_STATE(85)] = 3274,
  [SMALL_STATE(86)] = 3291,
  [SMALL_STATE(87)] = 3308,
  [SMALL_STATE(88)] = 3325,
  [SMALL_STATE(89)] = 3342,
  [SMALL_STATE(90)] = 3359,
  [SMALL_STATE(91)] = 3376,
  [SMALL_STATE(92)] = 3393,
  [SMALL_STATE(93)] = 3410,
  [SMALL_STATE(94)] = 3427,
  [SMALL_STATE(95)] = 3444,
  [SMALL_STATE(96)] = 3461,
  [SMALL_STATE(97)] = 3478,
  [SMALL_STATE(98)] = 3495,
  [SMALL_STATE(99)] = 3512,
  [SMALL_STATE(100)] = 3529,
  [SMALL_STATE(101)] = 3546,
  [SMALL_STATE(102)] = 3563,
  [SMALL_STATE(103)] = 3580,
  [SMALL_STATE(104)] = 3597,
  [SMALL_STATE(105)] = 3614,
  [SMALL_STATE(106)] = 3631,
  [SMALL_STATE(107)] = 3648,
  [SMALL_STATE(108)] = 3665,
  [SMALL_STATE(109)] = 3682,
  [SMALL_STATE(110)] = 3699,
  [SMALL_STATE(111)] = 3716,
  [SMALL_STATE(112)] = 3731,
  [SMALL_STATE(113)] = 3746,
  [SMALL_STATE(114)] = 3761,
  [SMALL_STATE(115)] = 3776,
  [SMALL_STATE(116)] = 3791,
  [SMALL_STATE(117)] = 3806,
  [SMALL_STATE(118)] = 3821,
  [SMALL_STATE(119)] = 3836,
  [SMALL_STATE(120)] = 3851,
  [SMALL_STATE(121)] = 3866,
  [SMALL_STATE(122)] = 3881,
  [SMALL_STATE(123)] = 3896,
  [SMALL_STATE(124)] = 3911,
  [SMALL_STATE(125)] = 3926,
  [SMALL_STATE(126)] = 3941,
  [SMALL_STATE(127)] = 3956,
  [SMALL_STATE(128)] = 3971,
  [SMALL_STATE(129)] = 3986,
  [SMALL_STATE(130)] = 4001,
  [SMALL_STATE(131)] = 4016,
  [SMALL_STATE(132)] = 4041,
  [SMALL_STATE(133)] = 4056,
  [SMALL_STATE(134)] = 4071,
  [SMALL_STATE(135)] = 4086,
  [SMALL_STATE(136)] = 4101,
  [SMALL_STATE(137)] = 4116,
  [SMALL_STATE(138)] = 4131,
  [SMALL_STATE(139)] = 4146,
  [SMALL_STATE(140)] = 4161,
  [SMALL_STATE(141)] = 4176,
  [SMALL_STATE(142)] = 4191,
  [SMALL_STATE(143)] = 4206,
  [SMALL_STATE(144)] = 4221,
  [SMALL_STATE(145)] = 4236,
  [SMALL_STATE(146)] = 4251,
  [SMALL_STATE(147)] = 4266,
  [SMALL_STATE(148)] = 4281,
  [SMALL_STATE(149)] = 4296,
  [SMALL_STATE(150)] = 4311,
  [SMALL_STATE(151)] = 4326,
  [SMALL_STATE(152)] = 4341,
  [SMALL_STATE(153)] = 4356,
  [SMALL_STATE(154)] = 4382,
  [SMALL_STATE(155)] = 4396,
  [SMALL_STATE(156)] = 4410,
  [SMALL_STATE(157)] = 4424,
  [SMALL_STATE(158)] = 4450,
  [SMALL_STATE(159)] = 4464,
  [SMALL_STATE(160)] = 4478,
  [SMALL_STATE(161)] = 4504,
  [SMALL_STATE(162)] = 4530,
  [SMALL_STATE(163)] = 4544,
  [SMALL_STATE(164)] = 4570,
  [SMALL_STATE(165)] = 4596,
  [SMALL_STATE(166)] = 4622,
  [SMALL_STATE(167)] = 4638,
  [SMALL_STATE(168)] = 4664,
  [SMALL_STATE(169)] = 4678,
  [SMALL_STATE(170)] = 4692,
  [SMALL_STATE(171)] = 4706,
  [SMALL_STATE(172)] = 4720,
  [SMALL_STATE(173)] = 4745,
  [SMALL_STATE(174)] = 4768,
  [SMALL_STATE(175)] = 4791,
  [SMALL_STATE(176)] = 4814,
  [SMALL_STATE(177)] = 4825,
  [SMALL_STATE(178)] = 4836,
  [SMALL_STATE(179)] = 4855,
  [SMALL_STATE(180)] = 4880,
  [SMALL_STATE(181)] = 4903,
  [SMALL_STATE(182)] = 4914,
  [SMALL_STATE(183)] = 4932,
  [SMALL_STATE(184)] = 4952,
  [SMALL_STATE(185)] = 4970,
  [SMALL_STATE(186)] = 4990,
  [SMALL_STATE(187)] = 5002,
  [SMALL_STATE(188)] = 5022,
  [SMALL_STATE(189)] = 5042,
  [SMALL_STATE(190)] = 5062,
  [SMALL_STATE(191)] = 5080,
  [SMALL_STATE(192)] = 5098,
  [SMALL_STATE(193)] = 5118,
  [SMALL_STATE(194)] = 5138,
  [SMALL_STATE(195)] = 5156,
  [SMALL_STATE(196)] = 5176,
  [SMALL_STATE(197)] = 5196,
  [SMALL_STATE(198)] = 5216,
  [SMALL_STATE(199)] = 5236,
  [SMALL_STATE(200)] = 5256,
  [SMALL_STATE(201)] = 5276,
  [SMALL_STATE(202)] = 5296,
  [SMALL_STATE(203)] = 5316,
  [SMALL_STATE(204)] = 5336,
  [SMALL_STATE(205)] = 5356,
  [SMALL_STATE(206)] = 5376,
  [SMALL_STATE(207)] = 5396,
  [SMALL_STATE(208)] = 5408,
  [SMALL_STATE(209)] = 5428,
  [SMALL_STATE(210)] = 5448,
  [SMALL_STATE(211)] = 5468,
  [SMALL_STATE(212)] = 5488,
  [SMALL_STATE(213)] = 5508,
  [SMALL_STATE(214)] = 5525,
  [SMALL_STATE(215)] = 5542,
  [SMALL_STATE(216)] = 5559,
  [SMALL_STATE(217)] = 5576,
  [SMALL_STATE(218)] = 5593,
  [SMALL_STATE(219)] = 5608,
  [SMALL_STATE(220)] = 5623,
  [SMALL_STATE(221)] = 5638,
  [SMALL_STATE(222)] = 5655,
  [SMALL_STATE(223)] = 5672,
  [SMALL_STATE(224)] = 5689,
  [SMALL_STATE(225)] = 5706,
  [SMALL_STATE(226)] = 5723,
  [SMALL_STATE(227)] = 5740,
  [SMALL_STATE(228)] = 5757,
  [SMALL_STATE(229)] = 5765,
  [SMALL_STATE(230)] = 5773,
  [SMALL_STATE(231)] = 5780,
  [SMALL_STATE(232)] = 5791,
  [SMALL_STATE(233)] = 5798,
  [SMALL_STATE(234)] = 5805,
  [SMALL_STATE(235)] = 5812,
  [SMALL_STATE(236)] = 5819,
  [SMALL_STATE(237)] = 5826,
  [SMALL_STATE(238)] = 5837,
  [SMALL_STATE(239)] = 5844,
  [SMALL_STATE(240)] = 5851,
  [SMALL_STATE(241)] = 5861,
  [SMALL_STATE(242)] = 5871,
  [SMALL_STATE(243)] = 5881,
  [SMALL_STATE(244)] = 5888,
  [SMALL_STATE(245)] = 5895,
  [SMALL_STATE(246)] = 5902,
  [SMALL_STATE(247)] = 5907,
  [SMALL_STATE(248)] = 5914,
  [SMALL_STATE(249)] = 5921,
  [SMALL_STATE(250)] = 5928,
  [SMALL_STATE(251)] = 5935,
  [SMALL_STATE(252)] = 5942,
  [SMALL_STATE(253)] = 5949,
  [SMALL_STATE(254)] = 5956,
  [SMALL_STATE(255)] = 5963,
  [SMALL_STATE(256)] = 5968,
  [SMALL_STATE(257)] = 5975,
  [SMALL_STATE(258)] = 5982,
  [SMALL_STATE(259)] = 5989,
  [SMALL_STATE(260)] = 5996,
  [SMALL_STATE(261)] = 6003,
  [SMALL_STATE(262)] = 6010,
  [SMALL_STATE(263)] = 6017,
  [SMALL_STATE(264)] = 6024,
  [SMALL_STATE(265)] = 6031,
  [SMALL_STATE(266)] = 6035,
  [SMALL_STATE(267)] = 6039,
  [SMALL_STATE(268)] = 6043,
  [SMALL_STATE(269)] = 6047,
  [SMALL_STATE(270)] = 6051,
  [SMALL_STATE(271)] = 6055,
  [SMALL_STATE(272)] = 6059,
  [SMALL_STATE(273)] = 6063,
  [SMALL_STATE(274)] = 6067,
  [SMALL_STATE(275)] = 6071,
  [SMALL_STATE(276)] = 6075,
  [SMALL_STATE(277)] = 6079,
  [SMALL_STATE(278)] = 6083,
  [SMALL_STATE(279)] = 6087,
  [SMALL_STATE(280)] = 6091,
  [SMALL_STATE(281)] = 6095,
  [SMALL_STATE(282)] = 6099,
  [SMALL_STATE(283)] = 6103,
  [SMALL_STATE(284)] = 6107,
  [SMALL_STATE(285)] = 6111,
  [SMALL_STATE(286)] = 6115,
  [SMALL_STATE(287)] = 6119,
  [SMALL_STATE(288)] = 6123,
  [SMALL_STATE(289)] = 6127,
  [SMALL_STATE(290)] = 6131,
  [SMALL_STATE(291)] = 6135,
  [SMALL_STATE(292)] = 6139,
  [SMALL_STATE(293)] = 6143,
  [SMALL_STATE(294)] = 6147,
  [SMALL_STATE(295)] = 6151,
  [SMALL_STATE(296)] = 6155,
  [SMALL_STATE(297)] = 6159,
  [SMALL_STATE(298)] = 6163,
  [SMALL_STATE(299)] = 6167,
  [SMALL_STATE(300)] = 6171,
  [SMALL_STATE(301)] = 6175,
  [SMALL_STATE(302)] = 6179,
  [SMALL_STATE(303)] = 6183,
  [SMALL_STATE(304)] = 6187,
  [SMALL_STATE(305)] = 6191,
  [SMALL_STATE(306)] = 6195,
  [SMALL_STATE(307)] = 6199,
  [SMALL_STATE(308)] = 6203,
  [SMALL_STATE(309)] = 6207,
  [SMALL_STATE(310)] = 6211,
  [SMALL_STATE(311)] = 6215,
  [SMALL_STATE(312)] = 6219,
  [SMALL_STATE(313)] = 6223,
  [SMALL_STATE(314)] = 6227,
  [SMALL_STATE(315)] = 6231,
  [SMALL_STATE(316)] = 6235,
  [SMALL_STATE(317)] = 6239,
  [SMALL_STATE(318)] = 6243,
  [SMALL_STATE(319)] = 6247,
  [SMALL_STATE(320)] = 6251,
  [SMALL_STATE(321)] = 6255,
  [SMALL_STATE(322)] = 6259,
  [SMALL_STATE(323)] = 6263,
  [SMALL_STATE(324)] = 6267,
  [SMALL_STATE(325)] = 6271,
  [SMALL_STATE(326)] = 6275,
  [SMALL_STATE(327)] = 6279,
  [SMALL_STATE(328)] = 6283,
  [SMALL_STATE(329)] = 6287,
  [SMALL_STATE(330)] = 6291,
  [SMALL_STATE(331)] = 6295,
  [SMALL_STATE(332)] = 6299,
  [SMALL_STATE(333)] = 6303,
  [SMALL_STATE(334)] = 6307,
  [SMALL_STATE(335)] = 6311,
  [SMALL_STATE(336)] = 6315,
  [SMALL_STATE(337)] = 6319,
  [SMALL_STATE(338)] = 6323,
  [SMALL_STATE(339)] = 6327,
  [SMALL_STATE(340)] = 6331,
  [SMALL_STATE(341)] = 6335,
  [SMALL_STATE(342)] = 6339,
  [SMALL_STATE(343)] = 6343,
  [SMALL_STATE(344)] = 6347,
  [SMALL_STATE(345)] = 6351,
  [SMALL_STATE(346)] = 6355,
  [SMALL_STATE(347)] = 6359,
  [SMALL_STATE(348)] = 6363,
  [SMALL_STATE(349)] = 6367,
  [SMALL_STATE(350)] = 6371,
  [SMALL_STATE(351)] = 6375,
  [SMALL_STATE(352)] = 6379,
  [SMALL_STATE(353)] = 6383,
  [SMALL_STATE(354)] = 6387,
  [SMALL_STATE(355)] = 6391,
  [SMALL_STATE(356)] = 6395,
  [SMALL_STATE(357)] = 6399,
  [SMALL_STATE(358)] = 6403,
  [SMALL_STATE(359)] = 6407,
  [SMALL_STATE(360)] = 6411,
  [SMALL_STATE(361)] = 6415,
  [SMALL_STATE(362)] = 6419,
  [SMALL_STATE(363)] = 6423,
  [SMALL_STATE(364)] = 6427,
  [SMALL_STATE(365)] = 6431,
  [SMALL_STATE(366)] = 6435,
  [SMALL_STATE(367)] = 6439,
  [SMALL_STATE(368)] = 6443,
  [SMALL_STATE(369)] = 6447,
  [SMALL_STATE(370)] = 6451,
  [SMALL_STATE(371)] = 6455,
  [SMALL_STATE(372)] = 6459,
  [SMALL_STATE(373)] = 6463,
  [SMALL_STATE(374)] = 6467,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(273),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(249),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(351),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(256),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(337),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(254),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(317),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_tag, 7, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_tag, 7, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block, 3, 1, 0),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_block, 3, 1, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_block, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 3, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 3, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptlet_block, 3, 1, 0),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptlet_block, 3, 1, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_expression, 3, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_expression, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_comment, 3, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 3, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_element, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_element, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 4, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 4, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 4, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_self_closing_tag, 4, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_self_closing_tag, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_block, 4, 1, 0),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_block, 4, 1, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 4, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_block, 4, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 4, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 4, 0, 0),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptlet_block, 4, 1, 0),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptlet_block, 4, 1, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 3, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 3, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 5, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 5, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 2, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_statement, 2, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_statement, 2, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptlet_line, 2, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptlet_line, 2, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_self_closing_tag, 5, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_self_closing_tag, 5, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_style_block, 5, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_style_block, 5, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_end_tag, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_end_tag, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 3, 0, 0),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tag, 6, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tag, 6, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tag, 6, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tag, 6, 0, 0),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_tag, 6, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_tag, 6, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_self_closing_tag, 6, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_self_closing_tag, 6, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 7, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 7, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 7, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 7, 0, 0),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_tag, 7, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_tag, 7, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tag, 7, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tag, 7, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_tag, 7, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_tag, 7, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_tag, 7, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_tag, 7, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 8, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 8, 0, 0),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_tag, 8, 0, 0),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_tag, 8, 0, 0),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_tag, 8, 0, 0),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_tag, 8, 0, 0),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tag, 8, 0, 0),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tag, 8, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_tag, 8, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_tag, 8, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_tag, 8, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_tag, 8, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_tag, 9, 0, 0),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_tag, 9, 0, 0),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_tag, 9, 0, 0),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_tag, 9, 0, 0),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_comment, 2, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_comment, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_tag, 1, 0, 0),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_tag, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_element, 2, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_end_tag, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_end_tag, 1, 0, 0),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_element, 2, 0, 0),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_element, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_void_element, 3, 0, 0),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_void_element, 3, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_self_closing_tag, 6, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_self_closing_tag, 6, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_start_tag, 5, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_start_tag, 5, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 5, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 5, 0, 0),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_variable, 2, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 6, 0, 0),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 6, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 7, 0, 0),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 7, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 8, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 8, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_start_tag, 4, 0, 0),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_start_tag, 4, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 4, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 4, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_tag, 3, 0, 0),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_tag, 3, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dynamic_start_tag, 6, 0, 0),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_start_tag, 6, 0, 0),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 1, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2, 0, 0),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_variable, 4, 0, 0),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_method_args, 2, 0, 0),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_method_args, 2, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat2, 2, 0, 0),
  [609] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat2, 2, 0, 0), SHIFT_REPEAT(131),
  [612] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_tag_repeat2, 2, 0, 0), SHIFT_REPEAT(343),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_method_args, 3, 0, 0),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute_method_args, 3, 0, 0),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_parameters, 3, 0, 0),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_parameters, 4, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_method_body, 2, 0, 0),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_argument, 3, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_method_body, 3, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 0),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_spread_attribute, 2, 0, 0),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_parameters_repeat1, 2, 0, 0),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(231),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_destructured_param, 3, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [930] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__raw_text = 0,
  ts_external_token__js_expression = 1,
  ts_external_token__js_paren_expression = 2,
  ts_external_token__js_line_expression = 3,
  ts_external_token_comment_content = 4,
  ts_external_token__js_import_line = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__raw_text] = sym__raw_text,
  [ts_external_token__js_expression] = sym__js_expression,
  [ts_external_token__js_paren_expression] = sym__js_paren_expression,
  [ts_external_token__js_line_expression] = sym__js_line_expression,
  [ts_external_token_comment_content] = sym_comment_content,
  [ts_external_token__js_import_line] = sym__js_import_line,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__raw_text] = true,
    [ts_external_token__js_expression] = true,
    [ts_external_token__js_paren_expression] = true,
    [ts_external_token__js_line_expression] = true,
    [ts_external_token_comment_content] = true,
    [ts_external_token__js_import_line] = true,
  },
  [2] = {
    [ts_external_token__js_expression] = true,
  },
  [3] = {
    [ts_external_token_comment_content] = true,
  },
  [4] = {
    [ts_external_token__raw_text] = true,
  },
  [5] = {
    [ts_external_token__js_line_expression] = true,
  },
  [6] = {
    [ts_external_token__js_paren_expression] = true,
  },
  [7] = {
    [ts_external_token__js_import_line] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_marko_external_scanner_create(void);
void tree_sitter_marko_external_scanner_destroy(void *);
bool tree_sitter_marko_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_marko_external_scanner_serialize(void *, char *);
void tree_sitter_marko_external_scanner_deserialize(void *, const char *, unsigned);

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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_marko_external_scanner_create,
      tree_sitter_marko_external_scanner_destroy,
      tree_sitter_marko_external_scanner_scan,
      tree_sitter_marko_external_scanner_serialize,
      tree_sitter_marko_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
