#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: start of range
 * @max: end of range
 * Return: ptr with values
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *ptr = NULL;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		ptr = (int *) malloc((max + 1) * sizeof(int));
		if (ptr == NULL)
			return (ptr);
		for (i = 0; i <= max; i++)
		{
			ptr[i] = i;
			ptr[i + 1] = '\0';
		}
		return (ptr);
	}
}
