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
	int num;

	num = 32978;
	ui = (unsigned int) INT_MAX + 1024;
	addr = (void *) 0x7ffe637541f0;
	tst = "the quick brown fox jumps over the lazy dog";

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

	len = _printf("Percent:[%d%%]\n", 80);
	len2 = printf("Percent:[%d%%]\n", 80);

	_printf("\n");

	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n\n", len2);

	_printf("%S\n", "Best\fSchool is\tthis\bone\ror\awhich\vone\fis\nit?");
	printf("\n");
	_printf("%i in binary is %b\n\n", num, num);

	_printf("The value of num variable is %i and its address is %p\n", num, &num);
	printf("The value of num variable is %i and its address is %p\n\n", num, &num);

	_printf("%d%% of %d == %d%% of %d\n", 80, 50, 50, 80);
	_printf("The first letter in the alphabet is %c\n\n", 'A');

	_printf("%s in reverse is: %r\n\n", "strawberry", "strawberry");


	/* To make sure the string functions do not modify the initial string: */
	printf("The initial string before reverse: %s.\n", tst);
	_printf("The reverse: %r\n", tst);
	printf("The initial string after reverse: %s.\n\n", tst);

	printf("The initial string before rot13: %s.\n", tst);
	_printf("The rot13 of the string: %R.\n", tst);
	printf("The initial string after rot13: %s.\n\n", tst);

	_printf("Unknown:[%k]\n");
	printf("Unknown:[%k]\n\n");

	_printf("Decimal: %d, Octal: %o, hex: %x, binary: %b\n\n", 195936478, 195936478, 195936478, 195936478);

	len = printf("%d in HEX is %X\n", 195936478, 195936478);
	len2 = _printf("%d in HEX is %X\n", 195936478, 195936478);

	_printf("\n");

	printf("Len: %i\n", len);
	printf("Len: %i\n\n", len2);

	/* Test the behavior of negative numbers */
	printf("unsigned: %u\n", -num);
	_printf("unsigned: %u\n\n", -num);

	_printf("%u in hex is: %x\n", -429496724, -429496724);
	printf("%u in hex is: %x\n\n", -429496724, -429496724);

	printf("Long int: %u\n", ui);
	_printf("Long int: %u\n\n", ui);

	/* Testing for cases of zero: */
	printf("%s in octal is %o\n", 0, 0);
	_printf("%s in octal is %o\n", 0, 0);

	return (0);
}
