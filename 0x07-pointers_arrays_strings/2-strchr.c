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
	int n = 0;

	while (s[i] != '\0' && s[i])
	{
		if (s[i] == c)
		{
			n = 1;
			break;
		}
		i++;
	}
	if (n == 1)
		return (s + i);
	else
		return (NULL);
}
