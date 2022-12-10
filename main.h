#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

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

/* implemented in string_functions.c*/
int _strlen(const char *str);
char *reverse_string(char *str);
char *_strcpy(char *dest, const char *src);
char *rot13(char *str);

/* implemented in print_nums.c */
int handle_d(va_list d);
int handle_oct(va_list oct);
int handle_b(va_list b);
int handle_u(va_list u);

/* implemented in print_hex.c */
int handle_x(va_list x);
int handle_upper_x(va_list upper);
int handle_p(va_list p);

/* implemented in print_strings.c*/
int _puts(const char *str);
int handle_ascii(va_list ascii);
int handle_r(va_list r);
int handle_rot13(va_list l);
int handle_s(va_list s);

/* implemented in print_chars.c*/
int _putchar(char c);
int handle_c(va_list c);

/* implemented in convert_bases.c */
void convert_bases(unsigned long num, char *tmp, int base, int upper);

/* implemented in _printf.c */
int _printf(const char *format, ...);

/* implemented in handle_specifiers.c */
int (*handle_specifiers(const char *format))(va_list);

#endif
