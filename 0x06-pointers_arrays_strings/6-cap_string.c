#include "main.h"

/**
 * cap_string - capitalises all words of a string
 * @c: pointer to a string
 *
 * Return: char
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 'a' && c[0] <= 'z')
			c[0] -= 32;
		else if (c[i] >= 9 && c[i] <= 11)
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
				c[i + 1] -= 32;
		}
		else if (c[i] >= 32 && c[i] <= 47)
		{
			if ((c[i + 1] >= 'a' && c[i + 1] <= 'z') && c[i] != 45)
			c[i + 1] -= 32;
		}
		else if (c[i] >= 58 && c[i] <= 63)
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
				c[i + 1] -= 32;
		}
		else if (c[i] >= 123 && c[i] <= 125)
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
				c[i + 1] -= 32;
		}
	}
	return (c);
	_putchar('\n');
}
