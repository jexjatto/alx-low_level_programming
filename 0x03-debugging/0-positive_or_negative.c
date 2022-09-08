#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point for the Code
*
* Description: This code dtermines if a random
*number displayed, is positive or negative.
*
* Return: this reurns an int 0 for (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
