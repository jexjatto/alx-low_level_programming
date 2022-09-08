#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point for the C code
*
* Description: This program prints a quote by dora
*
* Return: This reurns an int value of 1 for errors
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
