#include "sort.h"

/**
 * shell_sort - method to sort an array
 * @array:	a chain of numbers
 * @size:	length of an array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;

	if (size < 2 || array == NULL)
		return;

	for (gap = 1 ; gap <  size / 3; gap = 3 * gap + 1)
		;

	for ( ; gap ; gap = (gap - 1) / 3)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap &&
					array[j - gap] > array[j]; j -= gap)
				swap(&array[j], &array[j - gap]);
		}
		print_array(array, size);
	}
}
/**
 * swap - exchange of values
 * @a:	first value
 * @b:	second value
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

