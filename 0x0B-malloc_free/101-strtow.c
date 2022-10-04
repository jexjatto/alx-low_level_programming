#include <stdlib.h>
#include "main.h"

/**
 * count_word - gives the number of words in a string
 * @str: string
 *
 * Return: number of words
 */
int count_word(char *str)
{
	int i, j, count;

	i = 0;
	count = 0;

	for (j = 0; str[j] != '\0'; count++)
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			count++;
		}
	}

	return (count);
}
/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: pointer or NULL
 */
char **strtow(char *str)
{
	char **ptr, *aid;
	int i, k = 0, len = 0, word, c = 0, in, out;

	while (*(str + len))
		len++;
	word = count_word(str);
	if (word == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (word + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				out = i;
				aid = (char *) malloc(sizeof(char) * (c + 1));
				if (aid == NULL)
					return (NULL);
				while (in < out)
					*aid++ = str[in++];
				*aid = '\0';
				ptr[k] = aid - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			in = i;
	}

	ptr[k] = NULL;

	return (ptr);
}
