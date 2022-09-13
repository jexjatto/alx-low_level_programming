#include <stdio.h>

/**
* main - Entry point
*
* Description: This program print pairs of double digit combinations
*
* Return: returns int 0 (Success)
*/
int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 48;

	while (a < 58)
	{
		while (b < 58)
		{
			d = b + 1;
			c = a;
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < 57 || b < 56 || c < 57 || d < 57)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				d = 48;
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
