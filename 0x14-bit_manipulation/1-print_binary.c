#include "main.h"

/**
* print_binary - prints binary numbers
* @n: decimal number
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned int reducer = 32768, indicator = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (reducer)
	{
		if (indicator == 1 && (n & reducer) == 0)
			_putchar('0');
		else if ((n & reducer) != 0)
		{
			_putchar('1');
			indicator = 1;
		}
		reducer >>= 1;
	}
}
