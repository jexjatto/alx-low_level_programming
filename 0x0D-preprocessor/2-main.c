#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the name of the C sourcefile
 * it was compiled from
 * Return: 0 success
 */
#define NAME __FILE__
int main(void)
{
	printf("%s\n", NAME);
	return (0);
}

