# _printf

## Table of Content

- [About](#about)
- [Rules](#rules)
- [Authorized Resoueces](#authorized-functions-and-macros)
- [Capabilities](#capabilities-of-this-implementation)
- [Usage](#usage)
  - [Requirements](#requirements)
  - [Samples](#samples)
- [Authors](#authors)

## About

This project is a **custom implementation** of C's `printf` function to do formatted printing.
It is entirely written in C and was done in fulfilment of the
[ALX Software Engineering Programme](https://www.alxafrica.com/ "ALX SE")'s syllabus.

Syntax:

```C
int _printf(const char *, ...);
```

_________________________________________

## Rules

- All files to be compiled on Ubuntu 20.04 LTS using `gcc`, using the
options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code should use [Betty](https://github.com/holbertonschool/Betty "Betty Style") style
- No global variables
- No more than 5 functions per file
- All header files should be include-guarded
- All files should end with a new line

_________________________________________

## Authorized functions and macros

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

_________________________________________

## Capabilities of this implementation

The `_printf` function is capable of producing outputs according to the
following non-custom conversion specifiers:

- `c` for characters
- `s` for strings
- `d` for decimal integers
- `i` for integers
- `u` for unsigned integers
- `o` for octal numbers
- `x` for **lowercase** hexadecimal numbers
- `X` for **uppercase** hexadecimal numbers
- `p` for addresses

In addition to the above specifiers, `_printf` is also capable of handling
the following custom conversion specifiers:

- `b` converts an unsigned int to binary (and prints it)
- `S` prints a string, including the **ASCII code values** (in HEX) of non-printable characters
- `r` prints a string in reverse.
- `R` prints the [ROT-13](https://en.wikipedia.org/wiki/ROT13 "ROT-13") cypher of a string.

_________________________________________

## Usage

### Requirements

- Ubuntu 20.04 LTS
- GCC compiler

The source files to be compiled using
`-Wall -Werror -Wextra -pedantic -std=gnu89` flags.
The samples below illustrate the usage and compilation.

### Samples

Below is a sample main file showcasing the capabilities of `_printf`.

```C
/* filename: main.c */
#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
 int len;
 unsigned int ui;
 void *addr;
 char *tst;
 int num;

 num = 32978;
 ui = (unsigned int) INT_MAX + 1024;
 addr = (void *) 0x7ffe637541f0;
 tst = "the quick brown fox jumps over the lazy dog";

 len = _printf("Let's try to printf a simple sentence.\n\n");

 _printf("Length:[%d, %i]\n\n", len, len);

 _printf("Negative:[%d]\n\n", -762534);

 _printf("Unsigned:[%u]\n\n", ui);

 _printf("Unsigned octal:[%o]\n\n", ui);

 _printf("Unsigned hexadecimal:[%x, %X]\n\n", ui, ui);

 _printf("Character:[%c]\n\n", 'A');

 _printf("String:[%s]\n\n", "I am a string !");

 _printf("Address:[%p]\n\n", addr);

 _printf("Percent:[%%]\n\n");

 _printf("%S\n\n", "Best\nSchool");

 _printf("%i in binary is %b\n", num, num);
 _printf("The value of num variable is %i and its address is %p\n\n", num, &num);

 _printf("%d%% of %d == %d%% of %d\n\n", 80, 50, 50, 80);

 _printf("%s in reverse is: %r\n\n", "strawberry", "strawberry");

 _printf("%s\n", tst);
 _printf("Reverse: %r\n", tst);
 _printf("ROT-13 cypher: %R\n", tst);

 return (0);
}
```

When compiled and run:

```console
ian@github:~/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o demo
ian@github:~/printf$ ./demo
Let's try to printf a simple sentence.

Length:[40, 40]

Negative:[-762534]

Unsigned:[2147484671]

Unsigned octal:[20000001777]

Unsigned hexadecimal:[800003ff, 800003FF]

Character:[A]

String:[I am a string !]

Address:[0x7ffe637541f0]

Percent:[%]

Best\x0ASchool

32978 in binary is 1000000011010010
The value of num variable is 32978 and its address is 0x7ffe3773defc

80% of 50 == 50% of 80

strawberry in reverse is: yrrebwarts

the quick brown fox jumps over the lazy dog
Reverse: god yzal eht revo spmuj xof nworb kciuq eht
ROT-13 cypher: gur dhvpx oebja sbk whzcf bire gur ynml qbt
```

_________________________________________

## Authors

[Ian Duncan](https://github.com/dr8co/ "Ian")

[Essau Obong](https://github.com/obong/)
