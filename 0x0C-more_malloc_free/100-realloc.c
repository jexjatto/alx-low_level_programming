#include <stdlib.h>

/**
 * _realloc - reallocates a memory block.
 * @old_size: old size of array block.
 * @new_size: new size of array block.
 * @ptr: an array.
 * Return: pointer of array.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reloc;
	unsigned int i, j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	reloc = malloc(new_size);
	if (reloc == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	else
		j = new_size;

	for (i = 0; i < j; i++)
	{
		reloc[i] = ((char *)ptr)[i];
	}
	ptr = reloc;
	return (ptr);
	free(ptr);
}
