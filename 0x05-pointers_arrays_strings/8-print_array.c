#include <stdio.h>
#include "main.h"

/**
 * print_array - this prints n elements of an array
 * @a: an array of numbers
 * @n: integer value of number of elements to be
 * printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int b;

	b = 1;
	i = 0;
	if (n <= 0)
		printf("\n");
	else if (n > 0)
	{
		while (a[i] != '\0' && b < n)
		{
			printf("%d, ", a[i]);
			i++;
			b++;
		}
		printf("%d\n", a[i]);
	}
}
