#!/bin/bash
git init && git remote add origin {{cookiecutter.git_remote}} && git submodule add ../../google/googletest.git extern/googletest 
mkdir -p build && cd build && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .. && ln -s $(pwd)/compile_commands.json ../compile_commands.json

