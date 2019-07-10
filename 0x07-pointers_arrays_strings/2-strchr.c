#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - entry point
 * @s: entry pointer
 * @c: chracter to search
 * Return: after of the character find
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
		
	while (s[j] != '\0')
	{
		j++;
	}
	j++;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
		i++;
	}
	return (NULL);
}
