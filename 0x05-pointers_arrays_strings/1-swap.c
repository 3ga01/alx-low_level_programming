#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: Memory Address oof first value
 * @b: Memory Address of second value
 *
 * Return: void(succes)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
