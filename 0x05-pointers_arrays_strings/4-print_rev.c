#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints the reverse of a strring
 *
 * @s: string to be reversed
 *
 * Return: void(success);
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		putchar (s[len]);
	}
	putchar ('\n');
}
