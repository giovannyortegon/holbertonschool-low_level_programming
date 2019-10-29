#include "sort.h"
#include <stdio.h>


/**
 * quick_sort - sort array
 * @array:	array of number
 * @size:	size of array
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1);
}
/**
 * quickSort - Sort Array
 * @array:	array of number
 * @low:	start index
 * @high:	ending index
 */
void quickSort(int *array, int low, int high)
{
	int p_idx;

	if (low < high)
	{
		p_idx = partition(array, low, high);
		quickSort(array, low, p_idx - 1);
		quickSort(array, p_idx + 1, high);
	}
}
/**
 * partition - take last elements as pivot
 * @array:	array of number
 * @low:	start index
 * @high:	ending index
 * Return:	value index
 */
int partition(int *array, int low, int high)
{
	int pivot  = array[high];
	int i, j;

	i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (high + 1 == 10)
			{
				print_array(array, high + 1);
			}
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
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
