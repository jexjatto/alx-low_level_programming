#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings using first
 * n bytes of the second string
 * @s1: innitial string
 * @s2: string to be added
 * @n: number of bytes of char in s2
 * Return: pointer char to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	j = strlen(s1) + n;
	ptr = malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0' && k < n)
	{
		ptr[i] = s2[k];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
}
