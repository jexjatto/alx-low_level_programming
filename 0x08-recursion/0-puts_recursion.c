#include "main.h"

/**
 * _puts_recursion - this prints a string with a new line.
 * @s: the string pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0, j = 0;

	if (s[i] == '\0' && s[i] == s[j])
	{
		_putchar('\n');
		return;
	}
	_putchar(s[j]);
	i++;
	_puts_recursion(&s[j + 1]);
}
