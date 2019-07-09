#include "holberton.h"

/**
 * _strpbrk -entry point
 * @s: pointer entry
 * @accept: array to compare
 * Return: equal characters
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
