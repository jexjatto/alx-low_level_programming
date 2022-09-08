#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that iterates
 * through array
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate through array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (action == NULL || array == NULL)
		return;

	for (; index < size; index++)
		action(array[index]);
}
