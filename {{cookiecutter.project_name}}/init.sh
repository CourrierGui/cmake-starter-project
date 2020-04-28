#!/bin/bash
git init && git remote -v add origin {{cookiecutter.git_remote}} git submodule init && git submodule update
mkdir -p build && cd build && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .. && ln -s compile_commands.json ../compile_commands.json

