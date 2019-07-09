#include "holberton.h"

/**
 * _strspn - entry point
 * @s: entry pointer
 * @accept: array for comparing
 * Return: if there is not any equal is 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	unsigned int n = 0;

	while (s[i] != ',')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				n++;
		}
		i++;
	}
	if (n == 0)
		return ('\0');

	else
	{
		return (n);
	}
}
