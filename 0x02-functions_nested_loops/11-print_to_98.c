#include <stdio.h>

/**
* print_to_98 - this function ptints to 98 from int n
*
* @n: is an integer
*
* Description: Function primts from int n to number 98
*
* Return: is void
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
