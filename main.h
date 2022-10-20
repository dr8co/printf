#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct specifiers - to format the character string according
 * to specifiers.
 *
 * @s: the format to print
 * @ptr: the pointer to the corresponding formatting function
 *
 */
typedef struct specifiers
{
	char *s;

	int (*ptr)(va_list);

} f_specifiers;

int (*handle_specifiers(const char *format))(va_list);

int _printf(const char *format, ...);

int _putchar(char c);

int _puts(const char *str);

int _strlen(const char *str);

char *reverse_string(char *str);

char *_strcpy(char *dest, const char *src);

void convert_bases(long int i, char *tmp, int base, int upper);

char *rot13(char *str);

int handle_c(va_list c);

int handle_s(va_list s);

int handle_i(va_list i);

int handle_d(va_list d);

int handle_u(va_list u);

int handle_oct(va_list oct);

int handle_x(va_list x);

int handle_upper_x(va_list upper);

int handle_b(va_list b);

int handle_p(va_list p);

int handle_ascii(va_list ascii);

int handle_r(va_list r);

int handle_rot13(va_list l);

#endif
