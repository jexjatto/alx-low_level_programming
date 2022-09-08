#include "main.h"

/**
* print_alphabet_x10 - prints the alphabets 10
* times in lowercase
*
* Description: this will print the letters of the
* alphabet10 times and in lowercase with a new line
*
* Return: is void, nothing to return.
*/
void print_alphabet_x10(void)
{
	int row;
	int b;

	row = 1;
	while (row <= 10)
	{
		b = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		row++;
	}
}
