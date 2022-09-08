#include "main.h"

/**
* times_table - prints the 9 times table
*
* Description: prints the 9 times table
*
* Return: void
*/

void times_table(void)
{
	int rows;
	int columns;
	int times;
	int T_units;
	int Units;

	for (rows = 0; rows <= 9; rows++)
	{
		for (columns = 0; columns <= 9; columns++)
		{
			times = rows * columns;
			T_units = times / 10;
			Units = times % 10;

			if (columns == 0)
			{
				_putchar('0');
			}
			else if (times < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(Units + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(T_units + '0');
				_putchar(Units + '0');
			}
		}
		_putchar('\n');
	}
}
