#include "main.h"

/**
 * print_rev - this prints a string in reverse  with a newline
 * @s: pointer to a string
 *
 * Return: is void.
 */
void print_rev(char *s)
{
	int n;
	int i;
	int p;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	p = n - 1;
	i = 0;
	while (p >= i)
	{
		_putchar(s[p]);
		p--;
	}
	_putchar('\n');
}
