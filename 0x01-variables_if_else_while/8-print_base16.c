#include <stdio.h>

/**
* main - Entry point of the Code
*
* Description: This program prints the hexa-decimal numbers.
*
* Return: Always returns an int 0 for (Success)
*/
int main(void)
{
	int y;

	for (y = 0; y < 48; y++)
	{
		if (y < 10)
			putchar(y + '0');
		else if (y > 41)
			putchar(y - 10 + 'A');
	}
			putchar('\n');
	return (0);
}
