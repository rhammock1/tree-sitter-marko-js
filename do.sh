#!/bin/bash

tree-sitter generate

if [ "$1" == "--play" ]; then
    tree-sitter build --wasm

    tree-sitter playground
fi


