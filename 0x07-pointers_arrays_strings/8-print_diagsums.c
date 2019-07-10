#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -entry point
 * @a: entry pointer
 * @size: entry lenght
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	i = 0;
	j = size - 1;

	for (; i <= size * size - 1; i += (size + 1), j += (size - 1))
	{
		sum1 += a[i];
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}
