#include "main.h"

/**
* _isdigit - checks for digits 0 t0 9
* @c: is an integer.
*
* Description: checks if an int is a digit from 0
* to 9
*
* Return: returns 1 if a digit and 0 if otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
