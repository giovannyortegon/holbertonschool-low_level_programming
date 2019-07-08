#include "holberton.h"

/**
 * _memcpy - entry pointer
 * @dest: out pointer
 * @src: array for copying
 * @n: times number
 * Return:  array modified.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*dest++ = src[i];
		i++;
	}
	return (dest);
}
