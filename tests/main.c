#include "main.h"
#include <stdio.h>
#include <limits.h>


/**
 * main - entry point
 *
 * Return: always 0.
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;
	char *tst;
	char *rot;
	int num;

	num = 32978;
	ui = (unsigned int) INT_MAX + 1024;
	addr = (void *) 0x7ffe637541f0;
	tst = "the quick brown fox jumps over the lazy dog";
	rot = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("\n");

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n\n", len2, len2);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n\n", -762534);

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n\n", ui);

	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n\n", ui);

	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n\n", ui, ui);

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n\n", 'H');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n\n", "I am a string !");

	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n\n", addr);

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	_printf("\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n\n", len2);

	_printf("%S\n", "Best\nSchool");
	_printf("%i in binary is %b\n\n", num, num);

	_printf("The value of num variable is %i and its address is %p\n", num, &num);
	printf("The value of num variable is %i and its address is %p\n\n", num, &num);

	_printf("%d%% of %d == %d%% of %d\n", 80, 50, 50, 80);
	_printf("The first letter in the alphabet is %c\n\n", 'A');

	_printf("My country in reverse is: %r\n\n", "kenya");

	_printf("%R\n\n", rot);

	printf("The initial string before reverse: %s.\n", tst);
	_printf("The reverse is printed: %r\n", tst);
	printf("The initial string after reverse: %s.\n\n", tst);

	printf("The initial string before rot13: %s.\n", tst);
	_printf("The rot13 of the string: %R.\n", tst);
	printf("The initial string after rot13: %s.\n\n", tst);

	/*_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");*/

	return (0);
}
