#include "main.h"

/**
 * _strncat - This function concatenates n bytes of string
 * to the other
 * @dest: the destination string
 * @src: the target string
 * @n: n bytes of src
 *
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
	_putchar('\n');
}
