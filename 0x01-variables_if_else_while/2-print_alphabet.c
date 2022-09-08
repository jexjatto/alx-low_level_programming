#include <stdio.h>

/**
* main - Entry point of code
*
* Description: prints the letters of the alphabet.
*
* Return: gives an int value of 0 for success
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
