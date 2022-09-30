#include "main.h"

/**
 * _strspn - gives the lenght of initial segment of a string
 * matching another string
 * @s: main string
 * @accept: match string
 *
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len += 1;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (len);
}
