#include "main.h"

/**
* get_endianness - checks endianness
* Return: 0 if big nd 1 if little
*/
int get_endianness(void)
{
	unsigned int x = 1;
	char *ch = (char *)&x;

	if (*ch)
		return (1);
	return (0);
}
