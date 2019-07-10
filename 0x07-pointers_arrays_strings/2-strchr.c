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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
