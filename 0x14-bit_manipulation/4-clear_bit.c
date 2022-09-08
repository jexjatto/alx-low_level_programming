#include "main.h"

/**
* clear_bit - sets a bit to 0 at a given index
* @n: number
* @index: bit index
* Return: 1 if success and -1 if failed
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int reducer = 0x01;

	reducer = ~(reducer << index);
	if (reducer == 0x00)
		return (-1);
	*n &= reducer;
	return (1);
}
