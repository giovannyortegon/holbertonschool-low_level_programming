#include "sort.h"

/**
 * bubble_sort - sort an array
 * @array:	array to sort
 * @size:	length of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n = size - 1;
	int sort = 1;

	if (size < 2)
		return;

	while (sort && (n > 0))
	{
		sort = 0;
		for (i = 1; i <= n; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap(&array[i - 1], &array[i]);
				sort = 1;
				print_array(array, size);
			}
		}
		n--;
	}
}

/**
 * swap - exchange function
 * @a: prev array value
 * @b: current array value
 */
void swap(int *a, int *b)
{
	int aux = 0;

	aux = *a;
	*a = *b;
	*b = aux;
}
