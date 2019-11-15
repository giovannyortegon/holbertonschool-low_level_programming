#include "sort.h"

/**
 * create_array - function that creates an array for the counting sort
 * @array: array to be checked
 * @ptr: pointer of the new array
 * @size: size of the new array
 * Return: the size of the new array
 */
int create_array(int *array, int **ptr, int size)
{
	int i, k;

	for (i = 1, k = 0; i < size; i++)
		if (array[k] < array[i])
			k = i;

	k = array[k] + 1;

	*ptr = malloc(sizeof(int) * k);
	if (*ptr == NULL)
		return (0);

	for (i = 0; i < k; i++)
		(*ptr)[i] = 0;

	return (k);
}

/**
 * cpy_free_all - function that copies original array and free de extra space
 * @array: original array
 * @ptr1: extra array
 * @ptr2: extra array
 * @size: size of the original array
 */
void cpy_free_all(int **array, int **ptr1, int **ptr2, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*array)[i] = (*ptr2)[i];
	}

	free(*ptr1);
	free(*ptr2);
}

/**
 * counting_sort - Counting Sort Algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void counting_sort(int *array, size_t size)
{
	int i, k, *ptr1 = NULL, *ptr2 = NULL;

	if (size < 2 || array == NULL)
		return;

	k = create_array(array, &ptr1, (int)size);

	for (i = 0; i < (int)size; i++)
		ptr1[array[i]] += 1;

	for (i = 0; i < k - 1; i++)
		ptr1[i + 1] = ptr1[i] + ptr1[i + 1];

	print_array(ptr1, k);

	ptr2 = malloc(sizeof(int) * size);
	if (ptr2 == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		ptr2[i] = 0;

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == 0)
		{
			ptr2[ptr1[array[i]]] = array[i];
			ptr1[array[i]] -= 1;
		}
		else
		{
			ptr2[ptr1[array[i]] - 1] = array[i];
			ptr1[array[i]] -= 1;
		}
	}
	cpy_free_all(&array, &ptr1, &ptr2, size);
}
