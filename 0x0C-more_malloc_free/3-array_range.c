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
	int i = 0, len_arr = 0;
	int *ptr;

	if (min >= max)
		return (0);
	if (min < 0 || max < 0)
		return (0);
	len_arr = max - min;
	ptr = (int *) malloc((len_arr + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
