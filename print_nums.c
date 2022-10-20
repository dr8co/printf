#include "main.h"
#include <stdio.h>


/**
 * handle_d - prints decimal integers
 *
 * @d: the number to be printed
 * Return: the count of digits printed.
 */
int handle_d(va_list d)
{
	int num, count = 0;
	char tmp[100];

	num = va_arg(d, int);

	if (num < 0)
	{
		num *= -1;
		count += _puts("-");
	}
	
	convert_bases(num, tmp, 10, 0);
	count += _puts(tmp);

	return (count);
}


/**
 * handle_i - prints integers
 *
 * @i: the number to be printed
 * Return: the count of digits printed.
 */
int handle_i(va_list i)
{
	int num, count = 0;
	char tmp[100];

	num = va_arg(i, int);

	if (num < 0)
	{
		num *= -1;
		count += _puts("-");
	}
	
	convert_bases(num, tmp, 10, 0);
	count += _puts(tmp);

	return (count);
}


/**
 * handle_oct - prints decimal numbers in octal
 *
 * @oct: the decimal number to be printed in octal
 * Return: the count of digits printed.
 */
int handle_oct(va_list oct)
{
	char tmp[100];

	convert_bases(va_arg(oct, unsigned long), tmp, 8, 0);

	return (_puts(tmp));
}


/**
 * handle_b - prints decimal numbers in binary
 *
 * @b: the decimal number to be printed in binary
 * Return: the count of digits printed.
 */
int handle_b(va_list b)
{
	char tmp[100];

	convert_bases(va_arg(b, unsigned long), tmp, 2, 0);

	return (_puts(tmp));
}


/**
 * handle_u - print unsigned decimal integers
 *
 * @u: the number to be printed
 * Return: the count of digits printed.
 */
int handle_u(va_list u)
{
	char tmp[100];

	convert_bases(va_arg(u, unsigned long), tmp, 10, 0);

	return (_puts(tmp));
}
