#include "main.h"

/**
 * rot13 - encodes Rot-13 to a string
 * @s: pointer to string
 *
 * Return: a char
 */
char *rot13(char *s)
{
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; (x[j] != '\0' && y[j] != '\0'); j++)
		{
			if (x[j] == s[i])
			{
				s[i] = y[j];
				break;
			}
		}
	}
	return (s);
	_putchar('\n');
}
