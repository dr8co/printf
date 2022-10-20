#!/bin/bash

if [ -f "test" ]; then
  rm "test"
fi

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o test
./test