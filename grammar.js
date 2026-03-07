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
    $._js_expression,
    $._js_paren_expression,
    $._js_line_expression,
    $.comment_content,
  ],

  extras: $ => [/\s+/],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.start_tag, $.self_closing_tag],
    [$.static_statement, $.static_block],
    [$.scriptlet_line, $.scriptlet_block],
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
      $.scriptlet_block,
      $.scriptlet_line,
    ),

    _node: $ => choice(
      $.element,
      $.self_closing_tag,
      $.dynamic_element,
      $.dynamic_self_closing_tag,
      $.if_tag,
      $.for_tag,
      $.while_tag,
      $.macro_tag,
      $.text,
      $.inline_expression,
      $.html_comment,
      $.line_comment,
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
      optional($.tag_argument),
      repeat($.attribute),
      '>',
    ),

    end_tag: $ => seq(
      '</',
      $.tag_name,
      '>',
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
      optional($.tag_argument),
      repeat($.attribute),
      '/>',
    ),

    tag_variable: $ => seq(
      '/',
      $.identifier,
      optional(seq('=', $.attribute_value)),
    ),

    tag_name: _ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    shorthand_class: _ => token(seq('.', /[a-zA-Z_-][a-zA-Z0-9_-]*/)),
    shorthand_id: _ => token(seq('#', /[a-zA-Z_-][a-zA-Z0-9_-]*/)),

    tag_parameters: $ => seq(
      '|',
      $.identifier,
      repeat(seq(',', $.identifier)),
      '|',
    ),

    tag_argument: $ => seq(
      '(',
      $._js_paren_expression,
      ')',
    ),

    // Control flow tags
    if_tag: $ => seq(
      '<if',
      $.tag_argument,
      '>',
      repeat($._node),
      repeat($.else_if_tag),
      optional($.else_tag),
      '</if>',
    ),

    else_if_tag: $ => seq(
      '<else-if',
      $.tag_argument,
      '>',
      repeat($._node),
      '</else-if>',
    ),

    else_tag: $ => seq(
      '<else>',
      repeat($._node),
      '</else>',
    ),

    for_tag: $ => seq(
      '<for',
      optional($.tag_parameters),
      repeat($.attribute),
      '>',
      repeat($._node),
      '</for>',
    ),

    while_tag: $ => seq(
      '<while',
      $.tag_argument,
      '>',
      repeat($._node),
      '</while>',
    ),

    macro_tag: $ => seq(
      '<macro',
      optional($.tag_parameters),
      repeat($.attribute),
      '>',
      repeat($._node),
      '</macro>',
    ),

    // Dynamic elements: <${expr}> ... </>
    dynamic_element: $ => seq(
      $.dynamic_start_tag,
      repeat($._node),
      $.dynamic_end_tag,
    ),

    dynamic_start_tag: $ => seq(
      '<${',
      $._js_expression,
      '}',
      repeat($.attribute),
      '>',
    ),

    dynamic_end_tag: $ => choice(
      '</>',
      seq('</${', $._js_expression, '}', '>'),
    ),

    dynamic_self_closing_tag: $ => seq(
      '<${',
      $._js_expression,
      '}',
      repeat($.attribute),
      '/>',
    ),

    // Top-level constructs
    import_statement: $ => seq(
      'import',
      $._js_line_expression,
    ),

    static_statement: $ => seq(
      'static',
      $._js_line_expression,
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
      $._js_line_expression,
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
        optional(seq(
          choice('=', ':='),
          $.attribute_value,
        )),
      ),
    ),

    attribute_method_args: $ => seq(
      '(',
      optional($._js_paren_expression),
      ')',
    ),

    attribute_name: _ => /[a-zA-Z_:@][a-zA-Z0-9_:.@-]*/,

    attribute_value: $ => choice(
      $.quoted_string,
      $._js_expression,
    ),

    spread_attribute: $ => seq(
      '...',
      $._js_expression,
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
      $._js_expression,
      '}',
    ),

    // Comments
    html_comment: $ => seq(
      '<!--',
      optional($.comment_content),
      '-->',
    ),

    line_comment: _ => token(seq('//', /[^\n]*/)),

    // Identifiers (for tag parameters)
    identifier: _ => /[a-zA-Z_$][a-zA-Z0-9_$]*/,
  },
});
