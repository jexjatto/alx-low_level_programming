#include "main.h"

/**
 * leet - encodes leet to a string
 * @s: pointer to string
 *
 * Return: a char
 */
char *leet(char *s)
{
	char x[] = "AaEeOoTtLl";
	char y[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; (x[j] != '\0' && y[j] != '\0'); j++)
		{
			if (s[i] == x[j])
				s[i] = y[j];
		}
	}
	return (s);
	_putchar('\n');
}
