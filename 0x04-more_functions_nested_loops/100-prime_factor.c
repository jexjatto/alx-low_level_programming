#include <stdio.h>

/**
* main - prints the largest prime factor of the number
* 612852475143
*
* Description: will print prime factors.
*
* Return: Always 0
*/

int main(void)
{
	long int prime = 612852475143;
	long int a = prime;
	long int b = 2;

	while (a != b)
	{
		if (a % b == 0)
		{
			a = (a / b);
		}
		else
		{
			b++;
		}
	}

	printf("%li\n", a);

	return (0);
}
