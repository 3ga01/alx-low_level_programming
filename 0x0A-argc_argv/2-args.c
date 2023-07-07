#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Print the number of arguments passed to the programme
  * @argc: Number of arguments
  * @argv: Array of pointers of Arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
