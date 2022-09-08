#include "main.h"

/**
* print_alphabet - this will print the
*alphabets followed by a new line.
*
* Description: This print lower case
* letters a - z and a new line.
*
* Return: is void, nothing to return.
*/
void print_alphabet(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
