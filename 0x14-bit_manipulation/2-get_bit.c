#include "main.h"

/**
* get_bit - gets bit at an index
* @n: number to be checked for index bit
* @index: index of the bit
* Return: 0 if success -1 means error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int limit = 0x01;

	limit <<= index;
	if (limit == 0)
		return (-1);

	if ((n & limit))
		return (1);
	else
		return (0);
}
