#include "main.h"

/**
* print_line - this prints a line
*@n: is an integer
* Description: This program prints a line in the terminal
*
* Return: void
*/
void print_line(int n)
{
	int m = 1;

	while (m <= n)
	{
		_putchar('_');
		m++;
	}
	if (n <= 0 || n  >= 0)
	{
		_putchar('\n');
	}
}
