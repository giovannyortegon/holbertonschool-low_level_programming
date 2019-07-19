#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: number members
 * @size: size type
 * Return: allocate memory for a member.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (ptr);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
