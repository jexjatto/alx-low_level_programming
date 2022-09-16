#include "main.h"

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: number of times diagona prints.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int new = 0;
	int spaces;

	if (n > 0)
	{
		while (new < n)
		{
			for (spaces = 0; spaces < new; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			new++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
