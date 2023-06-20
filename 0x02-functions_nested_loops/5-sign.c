#include "main.h"

/**
 * print_sign - check sign of number
 * @n : number to check
 * Return:0(zero), 1(positve), -1(negative)
 */

int print_sign(int n)
{
int test;

if (n > 0)
{
	test = 1;
	_putchar('+');
}
else if (n == 0)
{
	test = 0;
	_putchar('0');
}
else
{
	test = -1;
	_putchar('-');
}

return (test);
}
