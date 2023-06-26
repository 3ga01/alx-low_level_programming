#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: Memory Address oof first value
 * @b: Memory Address of second value
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*a = *b;
}
