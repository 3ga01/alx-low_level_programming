#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to print alphabets in lowercase
 *
 * Return: 0(successfull)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
