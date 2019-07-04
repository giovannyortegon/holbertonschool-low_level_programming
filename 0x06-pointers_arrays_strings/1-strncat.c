#include "holberton.h"

/**
 * _strncat - entry point
 * @dest: Entry pointer
 * @src: Entry pointer
 * @n: index variable
 * Return: dest modified
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
