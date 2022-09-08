#include "main.h"

/**
* print_sign - This prints the sign of a number
*
* Description: This prints the sign of a number and return
* 1 for +ve, 0 for neutral 0 and -1 for -ve number
*
* @n: is a number
*
* Return: 1 is(+ve) 0 is(zero) and -1 is(-ve)
*/
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
