#include "main.h"

/**
* flip_bits - checks for number of bits flipped
* @n: number to be flopped
* @m: prints the value of
* Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips = 0, xor = (n ^ m), reducer = 0x01;

	while (reducer <= xor)
	{
		if (reducer & xor)
			flips++;
		reducer <<= 1;
	}
	return (flips);
}
