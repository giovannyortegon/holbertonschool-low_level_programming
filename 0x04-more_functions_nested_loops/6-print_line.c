#include "holberton.h"

/**
 * print_line - Entry point
 * @n: count a number times that need to print '_'
 */
void print_line(int n)
{
	/* @i: store repeating time */
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
