; Indent after opening tags
(element
  (start_tag) @indent.begin)
(element
  (end_tag) @indent.end)

; Control flow indents
(if_tag) @indent.begin
(for_tag) @indent.begin
(while_tag) @indent.begin
(macro_tag) @indent.begin

; Block indents
(class_block "{" @indent.begin)
(class_block "}" @indent.end)
(style_block "{" @indent.begin)
(style_block "}" @indent.end)
(static_block "{" @indent.begin)
(static_block "}" @indent.end)
(scriptlet_block "{" @indent.begin)
(scriptlet_block "}" @indent.end)
