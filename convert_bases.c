#include "main.h"


/**
 * convert_bases - converts numbers from decimal to any base
 *
 * @i: the number to convert
 * @tmp: the converted number as a string
 * @base: the base to convert the number to
 * @upper: switch for uppercase or lowercase digits
 * if upper = 1: for uppercase digits
 * if upper = 0: lowercase digits
 *
 * Return: nothing.
 */
void convert_bases(long i, char *tmp, int base, int upper)
{
	int d, sign = 0;
	char *str = tmp;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}
	while (i)
	{
		d = i % base;
		if (d > 9 && upper)
		{
			*str = 'A' + d - 10;
		}
		else if (d > 9 && !upper)
		{
			*str = 'a' + d - 10;
		}
		else
		{
			*str = '0' + d;
		}
		i /= base;
		str++;
	}

	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	reverse_string(tmp);
}
