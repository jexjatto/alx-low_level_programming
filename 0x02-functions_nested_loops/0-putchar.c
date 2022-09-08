#include <stdio.h>
#include "main.h"

/**
* main - Entry point
*
* Description: This program prints _putchar using _putchar function
*
* Return: 0 is success
*/
int main(void)
{
	char t[] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(t[a]);
	}
	_putchar('\n');
	return (0);
}
