#include "holberton.h"

/**
 * print_numbers - Entry point
 *
 */
void print_numbers(void)
{
	/* @i: Incremment ASCII charanter */
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
