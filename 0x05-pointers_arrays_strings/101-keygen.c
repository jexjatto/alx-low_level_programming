#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point of the C code
 *
 * Description: program that generates random passwords
 *
 * Return: 0 is success
 */
int main(void)
{

	int i, sum, n;
	int pasw[100];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pasw[i] = rand() % 78;
		sum = (sum + (pasw[i] + '0'));
		putchar(pasw[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum = (sum + n);
			putchar(n + '0');
			break;
		}
	}
	return (0);
}

