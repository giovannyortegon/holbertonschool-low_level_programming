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
	int i, x, y = 0;
	char *ar = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			y++;
		}
	}
	y++;
	ar = (char *) malloc(y * sizeof(char));
	if (ar == NULL)
		return (ar);
	y = 0;

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			putchar(av[i][x]);
		}
		putchar('\n');
	}
	return (ar);
}
