#include <stdio.h>

/**
* main - Entry point of code
*
* Description: This program print double digit number combinations
*
* Return: Always return an int 0 (Success)
*/

int main(void)
{
	int x = 48;
	int y = 48;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			putchar(x);
			putchar(y);

			if (x < 56 || y < 57)
			{
				putchar(44);
				putchar(32);
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
