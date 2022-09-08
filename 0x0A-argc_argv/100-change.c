#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to return as chang
 * @argc:  the size of the argument vector
 * @argv: an array containing the
 * Return: 0 is success
 */

int main(int argc, char *argv[])
{
	int cents, rem, change;
	int ch25, ch10, ch5, ch2, ch1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	ch25 = cents / 25;
	rem = cents % 25;
	ch10 = rem / 10;
	rem %= 10;
	ch5 = rem / 5;
	rem %= 5;
	ch2 = rem / 2;
	rem %= 2;
	ch1 = rem / 1;

	change = ch25 + ch10 + ch5 + ch2 + ch1;

	printf("%d\n", change);
	return (0);
}
