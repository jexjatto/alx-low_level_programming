#include "main.h"

/**
 * binary_to_uint - converts a string of binary characters
 * to unsigned decimal int
 * @b: binary string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 1, uint = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;
	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			uint += power;
		power *= 2;
		len--;
	}
	return (uint);
}
