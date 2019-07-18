#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: size
 * Return: if memry is valid
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
