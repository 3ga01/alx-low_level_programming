#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string in reverse
 *
 *@s: string to be reversed
 *
 *Return: void(success)
 */
void print_rev(char *s)
{
	int len;
	int i;
	char *c;

	len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
