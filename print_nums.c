#include "main.h"

/**
 * handle_d - prints decimal integers
 *
 * @d: the number to be printed
 * Return: the count of digits printed.
 */
int handle_d(va_list d)
{
	int num, count = 0;
	char *tmp;

	num = va_arg(d, int);

	if (num == 0)
	{
		return (_puts("0"));
	}

	tmp = malloc(sizeof(char) * num_length(num) + 1);

	if (num < 0)
	{
		num *= -1;
		count += _puts("-");
	}

	convert_bases(num, tmp, 10, 0);
	count += _puts(tmp);
	free(tmp);

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
	int num, count = 0;
	char *tmp;

	num = va_arg(oct, unsigned int);

	if (num == 0)
	{
		return (_puts("0"));
	}

	tmp = malloc(12);

	convert_bases(num, tmp, 8, 0);
	count += _puts(tmp);
	free(tmp);

	return (count);
}


/**
 * handle_b - prints decimal numbers in binary
 *
 * @b: the decimal number to be printed in binary
 * Return: the count of digits printed.
 */
int handle_b(va_list b)
{
	char *tmp;
	int num, count = 0;

	num = va_arg(b, unsigned int);

	if (num == 0)
	{
		return (_puts("0"));
	}
	tmp = malloc(33);
	convert_bases(num, tmp, 2, 0);
	count += _puts(tmp);

	free(tmp);

	return (count);
}


/**
 * handle_u - print unsigned decimal integers
 *
 * @u: the number to be printed
 * Return: the count of digits printed.
 */
int handle_u(va_list u)
{
	char *tmp;
	int num, count = 0;

	num = va_arg(u, unsigned int);

	if (num == 0)
	{
		return (_puts("0"));
	}

	tmp = malloc(11);
	convert_bases(num, tmp, 10, 0);
	count += _puts(tmp);

	free(tmp);

	return (count);
}


/**
 * num_length - finds the number of digits a decimal integer has.
 * Note that the negative sign is also counted if a negative
 * integer is passed to the function.
 *
 * @x: the decimal integer whose digits are to be counted.
 * Return: the count of digits in the integer.
 */
int num_length(long x)
{
	int i = 0;

	if (x < 0)
	{
		x *= -1;
		i++;
	}

	while (x)
	{
		x /= 10;
		i++;
	}
	return (i);
}
