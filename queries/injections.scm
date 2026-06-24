; Inject JavaScript into JS expression nodes
((js_expression) @injection.content
  (#set! injection.language "javascript"))

((js_paren_expression) @injection.content
  (#set! injection.language "javascript"))

((js_line_expression) @injection.content
  (#set! injection.language "javascript"))

((js_import_line) @injection.content
  (#set! injection.language "javascript"))

; Inject JavaScript into quoted strings so backtick template literals
; highlight their ${...} interpolations (plain "..."/'...' parse as JS
; string literals — unchanged appearance).
((quoted_string) @injection.content
  (#set! injection.language "javascript"))

; Inject JavaScript into block constructs (raw text bodies)
((scriptlet_block) @injection.content
  (#set! injection.language "javascript"))

((scriptlet_line) @injection.content
  (#set! injection.language "javascript"))

((class_block) @injection.content
  (#set! injection.language "javascript"))

((static_block) @injection.content
  (#set! injection.language "javascript"))

; Inject CSS into style blocks
((style_block) @injection.content
  (#set! injection.language "css"))
