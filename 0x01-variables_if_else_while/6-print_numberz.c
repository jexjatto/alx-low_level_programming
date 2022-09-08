#include <stdio.h>

/**
* main - Entry point of the code
*
* Description:TThis program print single digit numbers of the base 10
*
* Return: int value of 0 indicating  (Success)
*/
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
