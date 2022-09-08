#include <stdio.h>

/**
* main - prints all natural numbers multiples of 3 & 5
*
* Description: Function displays all the positive multiples of
* 3 and 5 that is < 1024.
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	int sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = (sum + n);
		}
	}

	printf("%d\n", sum);

	return (0);
}
