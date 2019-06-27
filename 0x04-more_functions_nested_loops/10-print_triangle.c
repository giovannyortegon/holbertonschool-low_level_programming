#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: Entry variabale
 */

void print_triangle(int size)
{
	/* @i: increment rows */
	int i;
	/* @j: increment column */
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j != size && j <= size - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
