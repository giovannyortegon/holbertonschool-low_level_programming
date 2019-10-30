#include "sort.h"

/**
 * selection_sort - sort an array
 * @array:	array
 * @size:	length array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int flag = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		flag = 0;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
				flag = 1;
			}
		}
		swap(&array[min_idx], &array[i]);
		if (flag == 1)
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

