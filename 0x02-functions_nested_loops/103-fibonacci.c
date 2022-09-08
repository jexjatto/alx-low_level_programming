#include <stdio.h>

/**
* main - prints the sum of all even Fibonacci
* numbers below 4,000,000
*
* Description: All fibonacci numbers below 4Million will
* be added and printed.
*
* Return: Always 0.
*/
int main(void)
{
	long int sum, fib, first, second;

	sum = 0;
	fib = 0;
	first = 0;
	second = 1;

	while (fib < 4000000)
	{
		fib = first + second;
		if (fib % 2 == 0)
		{
			sum = (fib + sum);
		}
		first = second;
		second = fib;
	}

	printf("%li\n", sum);

	return (0);
}

