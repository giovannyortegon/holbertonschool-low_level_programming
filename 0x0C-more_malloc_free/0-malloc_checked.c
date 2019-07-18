#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: size
 * Return: if memry is valid
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = (int *)malloc(b * sizeof(int));
	if (ptr == 0)
		exit(98);

	return (ptr);
}
