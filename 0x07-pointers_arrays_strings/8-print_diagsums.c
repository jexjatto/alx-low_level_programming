#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of 2
 * diagonals of a square matrix
 * @a: 2D array of integers
 * @size: array  size
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, add, s;

	i = 0;
	add = 0;
	s = size * size;
	while (i < s)
	{
		if (i % (size + 1) == 0)
			add += a[i];
		i++;
	}
	printf("%d, ", add);

	add = 0;
	i = 0;
	while (i < s)
	{
		if (i % (size - 1) == 0 && i != (s - 1) && i != 0)
			add += a[i];
		i++;
	}
	printf("%d\n", add);
}
