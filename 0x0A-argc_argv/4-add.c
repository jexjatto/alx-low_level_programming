#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer of arrays
 * Description: adds positvie arguments to main
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int add = 0, x = 0;
	for (x = 0; x < argc; x++)
	{
		if (atoi(argv[x]) != 0 && argv[x] != 0)
		{
			add += atoi(argv[x]);
			continue;
		}
	}
	if (argc < 2)
		printf("0\n");
	else
		printf("%d\n", add);
	return (0);
}
