#include "main.h"

/**
 * _div - checks for prime
 * @a: integer
 * @b: integer
 * Return: conditional int
 */

int _div(int a, int b)
{
	if (b % a == 0)
	{
		return (0);
	}
	else if (b / 2 > a)
	{
		return (_div(a + 2, b));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - gives prime numbers
 * @n: integer
 * Return: int
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (_div(3, n));
	}
}
