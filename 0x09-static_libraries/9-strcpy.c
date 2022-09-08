#include "main.h"

/**
 * _strcpy - copies string from one pointer to the other
 * @dest: string one
 * @src: string two
 *
 * Return: returns a string of characters
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
