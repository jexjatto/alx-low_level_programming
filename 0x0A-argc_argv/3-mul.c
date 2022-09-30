#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer of arrays
 * Description: multiplies two arguments.
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int mul = 0;

	mul = i * j;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
		return (0);
	}
	return (0);
}
