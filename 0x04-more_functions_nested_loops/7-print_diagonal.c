#include "holberton.h"

/**
 * print_diagonal - Entry point
 * @n: Times number to repeat '\'
 */
void print_diagonal(int n)
{
	/* @i: number of '\' */
	int i;
	/* @j: number of spaces ' ' */
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}


}
