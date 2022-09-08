#include <stdio.h>

/**
* main - The code begins to run from main
*
* Description: This program  prints a
* combination of three digit numbers without repetition
*
* Return: int return of 0 for (Success)
*/
int main(void)
{
	int a = 48;
	int b  = 48;
	int c = 48;

	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			c = b + 1;
			while (c < 58)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a < 55 || b < 56 || c < 57)
				{
					putchar(44);
					putchar(32);
				}
				c++;
			}

			b++;
		}

		a++;
	}

	putchar('\n');
	return (0);
}
