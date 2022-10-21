#include "main.h"


/**
 * handle_x - prints lowercase hexadecimals
 *
 * @x: the number to be printed in hexadecimal
 * Return: the count of the digits printed.
 */
int handle_x(va_list x)
{
	char *tmp;
	int num, count = 0;

	num = va_arg(x, unsigned int);

	if (num == 0)
	{
		return (_puts("0"));
	}
	tmp = malloc(9);
	convert_bases(num, tmp, 16, 0);

	count += _puts(tmp);
	free(tmp);

	return (count);
}


/**
 * handle_upper_x - prints uppercase hexadecimals
 *
 * @upper: the number to be printed in hexadecimal
 * Return: the count of the digits printed.
 */
int handle_upper_x(va_list upper)
{
	char *tmp;
	int num, count = 0;

	num = va_arg(upper, unsigned int);

	if (num == 0)
	{
		return (_puts("0"));
	}
	tmp = malloc(9);
	convert_bases(num, tmp, 16, 1);

	count += _puts(tmp);

	free(tmp);
	return (count);
}


/**
 * handle_p - prints addresses of variables
 *
 * @p: the address to be printed
 * Return: the count of the printed digits of the address.
 */
int handle_p(va_list p)
{
	char *tmp;
	int count = 0;
	unsigned long num;

	num = va_arg(p, unsigned long);

	if (num == 0)
	{
		return (_puts("(nil)"));
	}

	tmp = malloc(16);

	convert_bases2(num, tmp, 16, 0);
	count += _puts("0x");
	count += _puts(tmp);

	free(tmp);

	return (count);
}
