#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array:	Pointer to an array
 * @size:	Length of the array
 * @value:	Value of an element of an array
 * Return: -1 if is null or no exist or position
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i != size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
