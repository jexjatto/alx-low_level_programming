#include "main.h"

/**
* _isalpha - says if a charracter is a letter
*
* Description: this will tell if a char is a letter by
* returning the value of 1
*
* @c: is a an ascii charracter
*
* Return: will return 1 if the char is a letter and 0 if
* otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
