#include "holberton.h"

/**
 * print_square - Entry point
 * @size: size of draw
 */

void print_square(int size)
{
	/* @i: number of rows */
	int i;
	/* @j: number of column */
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= size - 1; i++)
		{
			for (j = 0; j < size ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
