#include "holberton.h"

/**
 * puts_half - Entry point
 * @str: Entry pointer, store a string.
 */

void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	n = (i - 1) / 2;
	i = 0;

	while (str[i] != '\0')
	{
		if (i > n)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
