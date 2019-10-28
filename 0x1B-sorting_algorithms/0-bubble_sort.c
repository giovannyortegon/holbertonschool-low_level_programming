#include "sort.h"

/**
 * bubble_sort - sort an array
 * @array:	array to sort
 * @size:	length of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n = size;
	int sort = 1, aux;

	while (sort && (--size > 0))
	{
		sort = 0;
		for (i = 1; i <= size; i++)
		{
			if (array[i - 1] > array[i])
			{
				aux = array[i - 1];
				array[i - 1] = array[i];
				array[i] = aux;
				sort = 1;
				print_array(array, n);
			}
		}
	}
}
