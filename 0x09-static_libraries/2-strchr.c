#include "main.h"

/**
 * _strchr - this checks for the occurence of a char in a string
 *  @s: main string
 *  @c: search char
 *  Return: a char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (c == *(s + i))
			return (s);
		s++;
	}
	if (c == *(s + i))
		return (s);
	return ('\0');
}
