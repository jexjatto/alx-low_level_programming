#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints  to stdout
 * @format: format string
 * @...: other arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list str;
	float rnum;
	int fig,  i = 0, j = 0;
	char *sent, let, pt[1000];

	va_start(str, format);
	i = 0;
	while (format[i] != '\0')
	{
		pt[i] = format[i];
		i++;
	}
	while (pt[j] != '\0')
	{
		switch (pt[j])
		{
		case 's':
			sent = va_arg(str, char *);
			if (sent == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", sent);
			break;
		case 'f':
			rnum = va_arg(str, double);
			printf("%f", rnum);
			break;
		case 'i':
			fig = va_arg(str, int);
			printf("%d", fig);
			break;
		case 'c':
			let = va_arg(str, int);
			putchar(let);
			break;
		}
		if (j < (i - 1) && (pt[j] == 'c' || pt[j] == 's' ||
				pt[j] == 'i' || pt[j] == 'f'))
			printf(", ");
		j++;
	}
	putchar(10);
	va_end(str);
}
