#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, else 0 and 1
 * if b is null or b is not binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		char current = *b;

		if (current != '0' && current !='1')
		{
			return 0;
		}

		result <<= 1;
		result += (current - '0');

		b++;
	}
	return result;
}
