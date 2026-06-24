; Tag names - HTML builtins vs custom components
(tag_name) @tag

; Tag delimiters (< > /> </ ) - distinct from tag names
(start_tag ["<" ">"] @tag.delimiter)
(end_tag ["</" ">" "</>"] @tag.delimiter)
(self_closing_tag ["<" "/>"] @tag.delimiter)
(dynamic_start_tag ["<${" "}" ">"] @tag.delimiter)
(dynamic_end_tag ["</>" "</${" "}" ">"] @tag.delimiter)
(dynamic_self_closing_tag ["<${" "}" "/>"] @tag.delimiter)

; Control flow - use keyword colors, not tag colors
(if_tag "<" @keyword.conditional)
(if_tag "if" @keyword.conditional)
(if_tag "</" @keyword.conditional)
(if_tag ">" @keyword.conditional)
(else_if_tag "<" @keyword.conditional)
(else_if_tag "else-if" @keyword.conditional)
(else_if_tag "</" @keyword.conditional)
(else_if_tag ">" @keyword.conditional)
(else_tag "<" @keyword.conditional)
(else_tag "else" @keyword.conditional)
(else_tag "</" @keyword.conditional)
(else_tag ">" @keyword.conditional)
(for_tag "<" @keyword.repeat)
(for_tag "for" @keyword.repeat)
(for_tag "</" @keyword.repeat)
(for_tag ">" @keyword.repeat)
(while_tag "<" @keyword.repeat)
(while_tag "while" @keyword.repeat)
(while_tag "</" @keyword.repeat)
(while_tag ">" @keyword.repeat)
(macro_tag "<" @keyword.function)
(macro_tag "macro" @keyword.function)
(macro_tag "</" @keyword.function)
(macro_tag ">" @keyword.function)

; Void elements
(void_element ["<" ">" "/>"] @tag.delimiter)

; Tag argument parens - e.g. <if(condition)>
(tag_argument ["(" ")"] @punctuation.bracket)

; Attributes
(attribute_name) @tag.attribute
(quoted_string) @string
(spread_attribute "..." @operator)
(attribute "=" @operator)
(attribute ":=" @operator)

; Shorthand class/id - distinct from attributes
(shorthand_class) @type
(shorthand_id) @constant

; Attribute method args - e.g. on-click('handler')
(attribute_method_args ["(" ")"] @punctuation.bracket)

; Attribute method body - e.g. onClick(){...}
(attribute_method_body ["{" "}"] @punctuation.bracket)

; Tag parameters - e.g. |item, index| or |{destructured}|
(tag_parameters "|" @punctuation.special)
(tag_parameters (identifier) @variable.parameter)
(destructured_param ["{" "}"] @punctuation.bracket)

; Tag shorthand value - e.g. <return=val/>
(tag_shorthand_value "=" @operator)

; Tag variables (Marko 6) - e.g. /count
(tag_variable "/" @punctuation.special)
(tag_variable (identifier) @variable)
(tag_variable "=" @operator)

; Top-level keywords
(import_statement "import" @keyword.import)
(class_block "class" @keyword.type)
(class_block ["{" "}"] @punctuation.bracket)
(style_block "style" @keyword.type)
(style_block ["{" "}"] @punctuation.bracket)
(style_language) @label
(static_statement "static" @keyword.modifier)
(static_block "static" @keyword.modifier)
(static_block ["{" "}"] @punctuation.bracket)

; Scriptlets
(scriptlet_line "$" @keyword.operator)
(scriptlet_block "$" @keyword.operator)
(scriptlet_block ["{" "}"] @punctuation.bracket)

; Comments - only capture the whole node, not children redundantly
(html_comment "<!--" @comment)
(html_comment "-->" @comment)
(comment_content) @comment
(line_comment) @comment
(block_comment) @comment

; Inline expressions
(inline_expression "${" @punctuation.special)
(inline_expression "}" @punctuation.special)

; Text content - NOT @string, use @none or @markup to distinguish from real strings
(text) @none
