#include "main.h"

/**
* _islower - tells if a letter is lowercase or not
*
* Description: will tell if a letter or char is lower
* case
* @c: c is an ascii charracter
*
* Return: will return 1, if parameter c is
* lower case and 0, if otherwise
*/

int _islower(int c)
{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
