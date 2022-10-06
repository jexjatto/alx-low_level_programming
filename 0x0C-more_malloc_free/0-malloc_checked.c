#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a block of memeory
 * @b: size of memeory type
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
