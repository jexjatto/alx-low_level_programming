#include "main.h"

/**
* more_numbers - this prints numbers from 0 to 14
*
* Desription: This program prints number
*
* Return: is void.
*/
void more_numbers(void)
{
	int r, a, b, n;

	r = 0;
	while (r <= 9)
	{
		a = '0';
		while (a <= '9')
		{
			_putchar(a);
			a++;
		}
		b = '0';
		n = 0;
		while (n <= 9)
		{
		if (n == 0 || n == 2 || n == 3 || n == 4 || n == 6 || n == 8)
			{
				b = '1';
			}
			else if (n == 1)
			{
				b = '0';
			}
			else if (n == 5)
			{
				b = '2';
			}
			else if (n == 7)
			{
				b = '3';
			}
			else if (n == 9)
			{
				b = '4';
			}
			_putchar(b);
			n++;
		}
		_putchar('\n');
		r++;
	}
}

