#include "variadic_functions.h"

/**
 * sum_them_all - sums up the arguments
 * @n: number of arguments
 * @...: other arguments
 * Return: an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(num, n);
	for (; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
	putchar(10);
}
