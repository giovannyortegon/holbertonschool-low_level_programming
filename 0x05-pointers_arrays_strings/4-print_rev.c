#include "holberton.h"

/**
 * print_rev -  Entry point
 * @s: Entry pointer
 */
void print_rev(char *s)
{
	int i, count;

	while (*(s + i) != '\0')
	{
		i++;
	}

	count = i - 1;

	for (i = count; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
