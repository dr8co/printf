#include "main.h"

/**
 * convert_bases - converts numbers from decimal to any base
 *
 * @num: the number to convert
 * @tmp: the converted number as a string
 * @base: the base to convert the number to
 * @upper: switch for uppercase or lowercase digits
 * upper = 1: for uppercase digits
 * upper = 0: lowercase digits
 *
 * Return: nothing.
 */
void convert_bases(unsigned long num, char *tmp, int base, int upper)
{
	int d;
	char *str = tmp;

	while (num)
	{
		d = num % base;
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
        num /= base;
		str++;
	}

	*str = '\0';
	reverse_string(tmp);
}
