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
	int first;
	int tmp;
	int last;

	len = strlen(s);
	first = 0;
	last = len - 1;

	while (first < last)
	{
		tmp = s[first];
		s[first] = s[last];
		s[last] = tmp;

		first++;
		last--;
	}
	puts(s);
}
