#include "main.h"

/**
 * _strcmp - This function comoares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, val;

	for (i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			break;
		}
		else if (s1[i] == s2[i])
		{
			val = 0;
		}
	}
	return (val);
	_putchar('\n');
}
