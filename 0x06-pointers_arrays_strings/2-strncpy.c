#include "main.h"
#include <string.h>

/**
 * _strncpy - This function copies n bytes of string
 * to the other
 * @dest: the destination string
 * @src: the target string
 * @n: n bytes of src
 *
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;


	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (j = i; j < n; j++)
		dest[j] = '\0';
	return (dest);
	_putchar('\n');
}
