#include "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: the destination string
 * @src: the target string
 *
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = i;
	j = 0;
	while (src[j] != '\0')
	{
		dest[m] = src[j];
		j++;
		m++;
	}
	dest[m] = '\0';
	return (dest);
}
