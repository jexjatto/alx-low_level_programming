#include "main.h"

/**
 * factorial - fives the factorial of a given int
 * @n: the integer
 *
 * Return: an int
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
