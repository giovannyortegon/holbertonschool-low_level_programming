#include "holberton.h"

/**
 * _puts_recursion - entry point
 * @s: Entry string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\0');
}
