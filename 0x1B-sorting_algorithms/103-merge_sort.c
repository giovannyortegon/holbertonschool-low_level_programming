#include "sort.h"

/**
 * topdownmerge - Merge sort algorithm implementation
 * @array: original array to be sorted
 * @low: low value
 * @mid: mid value
 * @high: high value
 * @ptr: array to be copied
 */
void topdownmerge(int *array, int low, int mid, int high, int *ptr)
{
	int i, j, k;

	i = low, j = mid;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + low, mid - low);
	printf("[right]: ");
	print_array(array + mid, high - mid);
	for (k = low; k < high; k++)
	{
		if (i < mid && (j >= high || array[i] <= array[j]))
		{
			ptr[k] = array[i];
			i++;
		}
		else
		{
			ptr[k] = array[j];
			j++;
		}
	}
	printf("[Done]: ");
	print_array(ptr + low, high - low);
}

/**
 * merge_sort_pro - Merge sort algorithm implementation
 * @array: original array to be sorted
 * @low: low value
 * @high: high value
 * @ptr: array to be copied
 */
void merge_sort_pro(int *array, size_t low, size_t high, int *ptr)
{
	size_t mid;

	if (high - low < 2)
		return;

	mid = (high + low) / 2;

	merge_sort_pro(ptr, low, mid, array);
	merge_sort_pro(ptr, mid, high, array);

	topdownmerge(array, low, mid, high, ptr);
}

/**
 * merge_sort - Merge sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *ptr = NULL, i;

	if (size < 2 || array == NULL)
		return;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		ptr[i] = array[i];

	merge_sort_pro(ptr, 0, (int)size, array);

	free(ptr);
}
