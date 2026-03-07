; Inject JavaScript into scriptlet blocks/lines, class blocks, and JS expressions
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
