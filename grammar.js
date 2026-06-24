/**
 * @file A parser for marko.js
 * @author rhammock1 <rhamm1027@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'marko',

  externals: $ => [
    $._raw_text,
    $.js_expression,
    $.js_paren_expression,
    $.js_line_expression,
    $.comment_content,
    $.js_import_line,
  ],

  extras: $ => [/\s+/],

  word: $ => $.identifier,

  conflicts: $ => [
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $._top_level_statement,
      $._node,
    ),

    _top_level_statement: $ => choice(
      $.import_statement,
      $.static_block,
      $.static_statement,
      $.class_block,
      $.style_block,
    ),

    _node: $ => choice(
      $.element,
      $.self_closing_tag,
      $.void_element,
      $.dynamic_element,
      $.dynamic_self_closing_tag,
      $.if_tag,
      $.else_if_tag,
      $.else_tag,
      $.for_tag,
      $.while_tag,
      $.macro_tag,
      $.scriptlet_block,
      $.scriptlet_line,
      $.text,
      $.inline_expression,
      $.html_comment,
      $.line_comment,
      $.block_comment,
    ),

    // Elements
    element: $ => seq(
      $.start_tag,
      repeat($._node),
      $.end_tag,
    ),

    start_tag: $ => seq(
      '<',
      $.tag_name,
      optional($.tag_variable),
      repeat(choice(
        $.shorthand_class,
        $.shorthand_id,
      )),
      optional($.tag_parameters),
      optional(choice(
        $.tag_argument,
        $.tag_shorthand_value,
      )),
      repeat($.attribute),
      '>',
    ),

    end_tag: $ => choice(
      seq('</', $.tag_name, '>'),
      '</>',
    ),

    self_closing_tag: $ => seq(
      '<',
      $.tag_name,
      optional($.tag_variable),
      repeat(choice(
        $.shorthand_class,
        $.shorthand_id,
      )),
      optional($.tag_parameters),
      optional(choice(
        $.tag_argument,
        $.tag_shorthand_value,
      )),
      repeat($.attribute),
      '/>',
    ),

    // HTML void elements - self-closing without /> or closing tag
    void_element: $ => seq(
      '<',
      alias($._void_tag_name, $.tag_name),
      repeat($.attribute),
      choice('>', '/>'),
    ),

    // No explicit token precedence: tree-sitter resolves lexer conflicts by
    // precedence *before* match length, so a prec'd 'input' would beat the
    // longer 'input-field'. Without it, longest-match wins for hyphenated
    // custom elements, while the implicit string-over-regex rule still makes a
    // bare <input> resolve to a void element over the tag_name regex.
    _void_tag_name: _ => token(choice(
      'area', 'base', 'br', 'col', 'embed', 'hr', 'img', 'input',
      'link', 'meta', 'param', 'source', 'track', 'wbr',
    )),

    tag_variable: $ => prec.right(1, seq(
      '/',
      choice(
        seq($.identifier, optional(seq('=', $.attribute_value))),
        $.destructured_param,
      ),
    )),

    tag_name: _ => /[@]?[a-zA-Z_][a-zA-Z0-9_-]*/,

    shorthand_class: _ => token(seq('.', /[a-zA-Z_-][a-zA-Z0-9_-]*/)),
    shorthand_id: _ => token(seq('#', /[a-zA-Z_-][a-zA-Z0-9_-]*/)),

    tag_parameters: $ => seq(
      '|',
      $._tag_param,
      repeat(seq(',', $._tag_param)),
      '|',
    ),

    _tag_param: $ => choice(
      $.identifier,
      $.destructured_param,
    ),

    destructured_param: $ => seq(
      '{',
      $.js_paren_expression,
      '}',
    ),

    tag_argument: $ => seq(
      '(',
      $.js_paren_expression,
      ')',
    ),

    // Tag shorthand value: <return=val/>, <if=condition>, etc.
    tag_shorthand_value: $ => seq(
      '=',
      $.attribute_value,
    ),

    // Control flow tags
    // Note: keywords like 'if', 'for' etc. are split from '<' so that
    // tree-sitter's keyword extraction (via the `word` rule) handles
    // word boundaries correctly. Without this, '<for' would greedily
    // match the start of '<form>', '<if' would match '<iframe>', etc.
    if_tag: $ => seq(
      '<',
      'if',
      choice($.tag_argument, $.tag_shorthand_value),
      '>',
      repeat($._node),
      '</',
      'if',
      '>',
    ),

    else_if_tag: $ => seq(
      '<',
      'else-if',
      choice($.tag_argument, $.tag_shorthand_value),
      '>',
      repeat($._node),
      '</',
      'else-if',
      '>',
    ),

    else_tag: $ => seq(
      '<',
      'else',
      '>',
      repeat($._node),
      '</',
      'else',
      '>',
    ),

    for_tag: $ => seq(
      '<',
      'for',
      optional($.tag_parameters),
      repeat($.attribute),
      '>',
      repeat($._node),
      '</',
      'for',
      '>',
    ),

    while_tag: $ => seq(
      '<',
      'while',
      choice($.tag_argument, $.tag_shorthand_value),
      '>',
      repeat($._node),
      '</',
      'while',
      '>',
    ),

    macro_tag: $ => seq(
      '<',
      'macro',
      optional($.tag_parameters),
      repeat($.attribute),
      '>',
      repeat($._node),
      '</',
      'macro',
      '>',
    ),

    // Dynamic elements: <${expr}> ... </>
    dynamic_element: $ => seq(
      $.dynamic_start_tag,
      repeat($._node),
      $.dynamic_end_tag,
    ),

    dynamic_start_tag: $ => seq(
      '<${',
      $.js_paren_expression,
      '}',
      optional($.tag_parameters),
      optional($.tag_shorthand_value),
      repeat($.attribute),
      '>',
    ),

    dynamic_end_tag: $ => choice(
      '</>',
      seq('</${', $.js_paren_expression, '}', '>'),
    ),

    dynamic_self_closing_tag: $ => seq(
      '<${',
      $.js_paren_expression,
      '}',
      optional($.tag_parameters),
      optional($.tag_shorthand_value),
      repeat($.attribute),
      '/>',
    ),

    // Top-level constructs
    import_statement: $ => seq(
      'import',
      $.js_import_line,
    ),

    static_statement: $ => seq(
      'static',
      $.js_line_expression,
    ),

    static_block: $ => prec.dynamic(1, seq(
      'static',
      '{',
      optional($._raw_text),
      '}',
    )),

    class_block: $ => seq(
      'class',
      '{',
      optional($._raw_text),
      '}',
    ),

    style_block: $ => seq(
      'style',
      optional($.style_language),
      '{',
      optional($._raw_text),
      '}',
    ),

    style_language: _ => token(seq('.', /[a-zA-Z]+/)),

    scriptlet_line: $ => seq(
      '$',
      $.js_line_expression,
    ),

    scriptlet_block: $ => prec.dynamic(1, seq(
      '$',
      '{',
      optional($._raw_text),
      '}',
    )),

    // Attributes
    attribute: $ => choice(
      $.spread_attribute,
      seq(
        $.attribute_name,
        optional($.attribute_method_args),
        optional(choice(
          $.attribute_method_body,
          seq(
            choice('=', ':='),
            $.attribute_value,
          ),
        )),
      ),
    ),

    attribute_method_args: $ => seq(
      '(',
      optional($.js_paren_expression),
      ')',
    ),

    attribute_method_body: $ => seq(
      '{',
      optional($._raw_text),
      '}',
    ),

    attribute_name: _ => /[a-zA-Z_:@][a-zA-Z0-9_:.@-]*/,

    attribute_value: $ => choice(
      $.quoted_string,
      $.js_expression,
    ),

    spread_attribute: $ => seq(
      '...',
      $.js_expression,
    ),

    quoted_string: _ => choice(
      /"[^"]*"/,
      /'[^']*'/,
      /`[^`]*`/,
    ),

    // Text content - must start with a non-whitespace, non-special character
    text: _ => token(prec(-1, /[^<$\/\n\s][^<$]*/)),

    // Inline expression: ${expr}
    inline_expression: $ => seq(
      '${',
      $.js_paren_expression,
      '}',
    ),

    // Comments
    html_comment: $ => seq(
      '<!--',
      optional($.comment_content),
      '-->',
    ),

    line_comment: _ => token(seq('//', /[^\n]*/)),

    // Block comments: /* ... */ and /** ... */
    block_comment: _ => token(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

    // Identifiers (for tag parameters)
    identifier: _ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,
  },
});
