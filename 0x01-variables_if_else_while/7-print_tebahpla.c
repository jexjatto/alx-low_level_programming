#include <stdio.h>

/**
* main - Entry poimt of the code
*
* Description: This program will print all alphabets in reverse other
*
* Return: int value of 0 indicatrs (success)
*/
int main(void)
{
	int f;

	for (f = 122; f > 96; f--)
	{
		putchar(f);
	}
		putchar('\n');
	return (0);
}
