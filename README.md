# tree-sitter-marko-js

Marko.js grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

This grammar supports the HTML-style syntax of Marko, including control flow tags,
dynamic tags, tag parameters, scriptlets, and inline expressions. JavaScript
expressions within tags are treated as opaque text, intended for use with
[injection queries](https://tree-sitter.github.io/tree-sitter/6-syntax-highlighting.html#language-injection)
for tree-sitter-javascript.

## References

- [Marko.js Documentation](https://markojs.com/docs/getting-started/)
- [Marko Syntax Reference](https://markojs.com/docs/syntax/)
- [Marko Core Tags](https://markojs.com/docs/core-tags/)
