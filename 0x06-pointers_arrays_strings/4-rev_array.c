#include "main.h"

/**
 * reverse_array - This function reverses the content on an
 * int array
 * @a: pointer to an array
 * @n: number of elements in the array
 * Return: return is void.
 */
void reverse_array(int *a, int n)
{
	int i, j, k, mid;

	mid = n / 2;
	j = n - 1;
	for (i = 0; i <= mid; i++)
	{
		if (i < mid)
		{
			k = a[i];
			a[i] = a[j];
			a[j] = k;
		}
		else if (i == mid)
			a[i] = a[i];
		j--;
	}
}
