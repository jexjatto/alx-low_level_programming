#include "main.h"

/**
 * _strlen - this prints the length of a string
 * @s: pointer to a string
 *
 * Return: returns an integer.
 */
int _strlen(char *s)
{
	int n;
	int lenght;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	lenght = n;
	return (lenght);
}
