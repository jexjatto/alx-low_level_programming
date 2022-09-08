#include <stdio.h>

/**
 * main - will print the first 50 Fibonacci
 *numbers, starting with 1 and 2.
*
* Description: displays only the fibonacci numbers from 1 to 50
*
* Return: Always 0.
*/

int main(void)
{
	long int fib;
	long int a;
	long int b;
	int num;

	fib = 0;
	a = 0;
	b = 1;
	num = 0;

	while (num < 49)
	{
		fib  = a + b;
		printf("%li, ", fib);
		a = b;
		b = fib;

		num++;
	}
	fib = a + b;
	printf("%li\n", fib);

	return (0);
}
