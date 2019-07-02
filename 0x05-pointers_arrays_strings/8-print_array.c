#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * @a: store an array
 * @n: is the lenght of array.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
