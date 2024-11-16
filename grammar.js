/**
 * @file A parser for marko.js
 * @author rhammock1 <rhamm1027@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'marko',

  rules: {
    // Entry point
    source_file: $ => repeat($._node),

    _node: $ => choice(
      $.text,
      $.element,
      $.for_block,
      $.if_block,
      $.javascript_block,
      $.html_inline_js,
      $.inline_javascript_expression,
      $.block_comment,
      $.inline_comment,
    ),

    block_comment: $ => seq(
      '<!--',
      optional(repeat(choice($.node_name, $.element, $.for_block, $.if_block, $.javascript_block, $.html_inline_js, $.inline_javascript_expression))),
      '-->',
    ),

    inline_comment: $ => seq(
      '//',
      optional($.any_text),
    ),

    element: $ => choice(
      seq(
        $.start_tag,
        repeat($._node),
        $.end_tag,
      ),
      $.self_closing_tag,
    ),

    start_tag: $ => seq(
      '<',
      $.node_name,
      repeat($.attribute),
      '>',
    ),

    end_tag: $ => seq(
      '</',
      $.node_name,
      '>',
    ),

    self_closing_tag: $ => seq(
      '<',
      $.node_name,
      repeat($.attribute),
      '/>',
    ),

    // Tag name (e.g., <div>, <custom-tag>)
    node_name: $ => /[a-zA-Z_][a-zA-Z0-9_-]*/,

    // Attributes (e.g., class="value", on-click(...))
    attribute: $ => seq(
      $.node_name,
      optional(seq(
        optional('='),
        choice($.string, $.html_inline_js, $.attribute_function_call)
      ))
    ),

    // Attribute function calls (e.g., on-click('handleClick'))
    attribute_function_call: $ => seq(
      '(',
      optional(choice($.string, $.any_text)),
      ')'
    ),

    inline_javascript_expression: $ => seq('$ ', choice($.variable, $._javascript_content)),

    // Inline JavaScript expression (e.g., ${expression})
    // html_inline_js: $ => seq('${', $._javascript_content, '}'),
    html_inline_js: _ => /\$\{[^{}]+}/,

    // JavaScript blocks (e.g., $ { ... })
    javascript_block: $ => seq(
      '$',
      '{',
      $.any_text,
      '}'
    ),

    // For-loop blocks (e.g., <for|item| of=state.items>...</for>)
    for_block: $ => seq(
      '<for|',
      $.variable_name,
      '|',
      'of=',
      $._javascript_content,
      '>',
      repeat($._node),
      '</for>'
    ),

    if_block: $ => seq(
      /<if\(/,
      $._javascript_content,
      /\)>/,
      repeat($._node),
      '</if>',
    ),

    const_declaration: _ => /const/,
    let_declaration: _ => /let/,
    var_declaration: _ => /var/,
    arrow_function: _ => /=>/,

    // Variable name (e.g., ingredient in for|ingredient|...)
    variable_name: _ => /[a-zA-Z_][a-zA-Z0-9_-]+/,

    variable: $ => seq(
      choice($.const_declaration, $.let_declaration, $.var_declaration),
      $.variable_name,
      '=',
      $.any_text,
    ),

    // Any text
    any_text: $ => /[\w ><={}\[\]'"`\$\-\+\/*%()\|\&.\?]+/,

    // Text content between elements
    text: $ => /[^<{]+/,

    raw_text: _ => /[^<>&\s]([^<>&]*[^<>&\s])?/,

    // Strings (e.g., "value" or 'value')
    string: $ => choice(
      /"[^"]*"/,
      /'[^']*'/,
      /`[^`]*`/,
    ),

    // Placeholder for JavaScript content
    _javascript_content: $ => /[^{}<>]+/,
  }
});

