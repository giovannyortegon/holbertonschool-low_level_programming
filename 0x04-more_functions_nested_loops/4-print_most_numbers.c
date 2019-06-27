#include "holberton.h"

/**
 * print_most_numbers - Entry points
 */
void print_most_numbers(void)
{
	/* @i: store number of ASCII*/
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
