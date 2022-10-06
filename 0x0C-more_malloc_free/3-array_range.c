#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * ordered from minimum to maximum
 * @min: the minimum value in the array
 * @max: maximum value in the array
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *aoint, i, len;

	if (min > max)
		return (NULL);
	len = (max - min + 1);
	aoint = malloc(sizeof(int) * len);
	if (aoint == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		aoint[i] = min;
		min++;
	}
	return (aoint);
}
