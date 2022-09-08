#include <stdio.h>

/**
* main - Entry point of the code
*
* Description: This program prints the letters of the alphabet except e, q
*
* Return: returns an int 0 (Success)
*/
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
		x++;
	}
	putchar(10);

	return (0);
}
