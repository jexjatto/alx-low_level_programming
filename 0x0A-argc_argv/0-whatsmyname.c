#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer of arrays
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = argc;

	i += 1;
	printf("%s\n", argv[0]);
	return (0);
}
