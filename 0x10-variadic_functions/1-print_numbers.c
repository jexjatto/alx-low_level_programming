#include "variadic_functions.h"

/**
 * print_numbers - prints numbers to stdout
 * @separator: seperates numbers
 * @n: number of arguments
 * @...: other arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int j;
	int ival;

	va_start(num, n);
	for (j = 0; j < n; j++)
	{
		ival = va_arg(num, int);
		printf("%d", ival);
		if (separator != NULL && j < (n - 1))
			printf("%s", separator);
	}
	va_end(num);
	putchar(10);
}
