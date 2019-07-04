#include "holberton.h"

/**
 * reverse_array -entry point
 * @a: entry pointer
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (i = 0, j = n - 1 ; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
