#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @i: n is an integer
*
* Description: This program prints the last
* digit of a number
*
* Return: integer return type.
*/

int print_last_digit(int i)
{
	int L;

	L = i % 10;
	if (i < 0)
	{
		L = L * -1;
	}
	_putchar(L + '0');
	return (L);
}
