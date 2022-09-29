#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - gives the lenght of a string.
 * @s: the string pointer
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	else if (*(s + 1) == '\0')
		i += 0;
	return (i);
}
