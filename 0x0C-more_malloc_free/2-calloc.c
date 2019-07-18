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
	int *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(98 * size);
	if (ptr == NULL)
		return (ptr);

	return (ptr);
}
