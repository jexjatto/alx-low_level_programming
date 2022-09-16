#include "main.h"

/**
* print_numbers - prints numbers from 0 t0 9
*
* Description: This program prints numbers 0 to 9 using
* _putchar function
*
* Return: void, nothing to return.
*/
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
