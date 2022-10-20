#include "main.h"
#include <stddef.h>


/**
 * handle_specifiers - checks for specifiers in a character string.
 *
 * @format: any valid format specifier in the character string.
 *
 * Return: a pointer to a formatting function or NULL.
 */
int (*handle_specifiers(const char *format))(va_list)
{
	int i;
	f_specifiers sp[] = {
			{"c", handle_c},
			{"s", handle_s},
			{"i", handle_i},
			{"d", handle_d},
			{"o", handle_oct},
			{"x", handle_x},
			{"X", handle_upper_x},
			{"b", handle_b},
			{"u", handle_u},
			{"p", handle_p},
			{"S", handle_ascii},
			{"r", handle_r},
			{"R", handle_rot13},
			{NULL, NULL}
	};

	for (i = 0; sp[i].s != NULL; i++)
	{
		if (*(sp[i].s) == *format)
		{
			break;
		}
	}
	return (sp[i].ptr);
}
