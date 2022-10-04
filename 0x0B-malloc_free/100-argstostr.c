#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenate all arguments supplied at run time
 * @ac: argument count
 * @av: pointer to arrays
 * Return: pointer to char
 */

char *argstostr(int ac, char **av)
{
	char *s, *constr;
	int i, j, num;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, num = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, num++)
			;
		num++;
	}
	num++;

	s = malloc(num * sizeof(char));
	if (s == NULL)
		return (NULL);

	constr = s;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*s = av[i][j];
			s++;
		}
		*s = '\n';
		s++;
	}

	return (constr);
}
