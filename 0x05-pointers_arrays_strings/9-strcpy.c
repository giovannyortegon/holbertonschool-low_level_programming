#include "holberton.h"

/**
 * _strcpy - entry point
 * @src: entry pointer
 * @dest: out point
 * Return: A new array
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char tmp;

	i = 0;

	while (src[i] != '\0')
	{
		tmp = src[i];
		dest[i] = tmp;
		dest[i + 1] = '\0';
		i++;
	}
	return (dest);
}
