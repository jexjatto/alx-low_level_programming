#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Description: A function that prints every
 * minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int Hrs_tens;
	int Hrs_ones;
	int mins_tens;
	int mins_ones;
	int Hrs_max;

	Hrs_max = 58;
	Hrs_tens = '0';
	while (Hrs_tens < '3')
	{
		if (Hrs_tens == '2')
		{
			Hrs_max = '4';
		}
		Hrs_ones = '0';
		while (Hrs_ones < Hrs_max)
		{
			mins_tens = '0';
			while (mins_tens < '6')
			{
				mins_ones = '0';
				while (mins_ones < 58)
				{
					_putchar(Hrs_tens);
					_putchar(Hrs_ones);
					_putchar(':');
					_putchar(mins_tens);
					_putchar(mins_ones);
					_putchar('\n');
					mins_ones++;
				}
				mins_ones = '0';
				mins_tens++;
			}
			mins_tens = '0';
			Hrs_ones++;
		}
		Hrs_ones = '0';
		Hrs_tens++;
	}
}
