#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - entry point
 * @ac: numbers of arguments
 * @av: pointer of each argument
 * Return: a pointer of all arguments concatenated
 */
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, st = 0;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			y++;
	}
	st = ac + y;
	ar = (char *) malloc((st + 1) * sizeof(char));
	if (ar == NULL)
		return (0);
	y = 0;

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++, y++)
		{
			ar[y] = av[i][x];
			ar[y + 1] = '\0';
		}
		ar[y++] = '\n';
	}
	return (ar);
}
