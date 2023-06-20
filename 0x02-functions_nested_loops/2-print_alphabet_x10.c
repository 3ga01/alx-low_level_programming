#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int line;
	char ch = 'a';

	for (line = 1; line <= 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
