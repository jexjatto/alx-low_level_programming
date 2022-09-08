#include "variadic_functions.h"

/**
 * print_strings - prints strings to stdout
 * @separator: seperating string
 * @n: number of arguments
 * @...: other arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int j = 0;
	char *doc;

	va_start(str, n);
	for (; j < n; j++)
	{
		doc = va_arg(str, char *);
		if (doc == NULL)
			printf("(nil)");
		else
			printf("%s", doc);
		if (separator != NULL && j < (n - 1))
			printf("%s", separator);
	}
	putchar(10);
	va_end(str);
}
