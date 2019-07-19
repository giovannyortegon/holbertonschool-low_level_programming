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
	int len_arr = 0;
	int *ptr = NULL;

	if (min > max)
		return (NULL);
	len_arr = max - min;
	ptr = (int *) malloc((len_arr + 1) * sizeof(int));
	if (ptr == NULL)
		return (ptr);
	for (min = 0; min <= max; min++)
	{
		ptr[min] = min;
		ptr[min + 1] = '\0';
	}
	return (ptr);
}
