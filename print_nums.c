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
	int tmp[10];
	int j, m, n, sum, count;

	n = va_arg(d, int);
	count = 0;
	m = 1000000000;
	tmp[0] = n / m;
	for (j = 1; j < 10; j++)
	{
		m /= 10;
		tmp[j] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (j = 0; j < 10; j++)
			tmp[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += tmp[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + tmp[j]);
			count++;
		}
	}
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
