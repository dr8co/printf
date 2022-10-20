#!/bin/bash

# remove previously compiled executable if exists
if [ -f "test" ]; then
  rm "test"
fi

# compile a new executable
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o test

# run the new executable if the compilation was a success
if [ -f "test" ]; then
  ./test
fi
