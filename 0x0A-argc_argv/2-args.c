#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer of arrays
 * Description: lists arguments supplied, first one included.
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = argc;

	i -= 1;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
