#include "holberton.h"

/**
 * _strncpy - entry
 * @dest: entry pointer
 * @src: entry pointer
 * @n: entry length
 * Return: dest modified
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
