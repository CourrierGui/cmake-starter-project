#!/bin/bash
mkdir -p build && cd build && cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 .. && ln -s compile_commands.json ../compile_commands.json

