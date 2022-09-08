#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: innitial string
 * @s2: string to be added
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k = 0;

	if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);
	else if (s1 == NULL && s2 == NULL)
		return ('\0');
	j = strlen(s1) + strlen(s2);
	ptr = malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		ptr[i] = s2[k];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
