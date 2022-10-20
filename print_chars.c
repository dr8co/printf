#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * handle_c - prints a character
 *
 * @c: character to be printed
 * Return: always 1.
 */
int handle_c(va_list c)
{
	char character = (char) va_arg(c, int);

	return (_putchar(character));
}

