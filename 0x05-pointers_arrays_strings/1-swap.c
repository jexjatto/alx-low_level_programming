#include "main.h"

/**
 * swap_int - swaps one integer value for the other.
 * @a: an integer
 * @b: another integer
 *
 * Return: is void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
