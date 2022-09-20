#include "main.h"

/**
 * _puts - this prints a string to the stdout with a newline
 * @str: pointer to a string
 *
 * Return: is void.
 */
void _puts(char *str)
{
	int n;
	int i;
	int p;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	p = n;
	i = 0;
	while (i < p)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
