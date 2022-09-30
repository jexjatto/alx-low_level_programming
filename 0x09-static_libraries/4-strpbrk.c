#include "main.h"

/**
 * _strpbrk - this checks for the first occurence
 *of a char in string a from string b
 *  @s: main string
 *  @accept: search char
 *  Return: a char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *pt;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				pt = &s[i];
				return (pt);
			}
			j++;
		}
		i++;
	}
	return (0);
}
