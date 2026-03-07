; Tags
(tag_name) @tag
(start_tag ["<" ">"] @tag.delimiter)
(end_tag ["</" ">"] @tag.delimiter)
(self_closing_tag ["<" "/>"] @tag.delimiter)
(dynamic_start_tag ["<${" "}" ">"] @tag.delimiter)
(dynamic_end_tag ["</>" "</${" "}" ">"] @tag.delimiter)
(dynamic_self_closing_tag ["<${" "}" "/>"] @tag.delimiter)

; Control flow keywords
(if_tag "<if" @keyword.conditional)
(if_tag "</if>" @keyword.conditional)
(else_if_tag "<else-if" @keyword.conditional)
(else_if_tag "</else-if>" @keyword.conditional)
(else_tag "<else>" @keyword.conditional)
(else_tag "</else>" @keyword.conditional)
(for_tag "<for" @keyword.repeat)
(for_tag "</for>" @keyword.repeat)
(while_tag "<while" @keyword.repeat)
(while_tag "</while>" @keyword.repeat)
(macro_tag "<macro" @keyword)
(macro_tag "</macro>" @keyword)

; Attributes
(attribute_name) @attribute
(quoted_string) @string
(shorthand_class) @attribute
(shorthand_id) @attribute
(spread_attribute "..." @punctuation.special)
(attribute "=" @operator)
(attribute ":=" @operator)

; Tag parameters
(tag_parameters "|" @punctuation.bracket)
(tag_parameters (identifier) @variable.parameter)

; Tag variables (Marko 6)
(tag_variable "/" @punctuation.special)
(tag_variable (identifier) @variable)

; Top-level constructs
(import_statement "import" @keyword.import)
(class_block "class" @keyword)
(class_block ["{" "}"] @punctuation.bracket)
(style_block "style" @keyword)
(style_block ["{" "}"] @punctuation.bracket)
(style_language) @attribute
(static_statement "static" @keyword)
(static_block "static" @keyword)
(static_block ["{" "}"] @punctuation.bracket)

; Scriptlets
(scriptlet_line "$" @keyword)
(scriptlet_block "$" @keyword)
(scriptlet_block ["{" "}"] @punctuation.bracket)

; Comments
(html_comment) @comment
(line_comment) @comment
(comment_content) @comment
(html_comment ["<!--" "-->"] @comment)

; Expressions
(inline_expression ["${" "}"] @punctuation.special)

; Text
(text) @string
