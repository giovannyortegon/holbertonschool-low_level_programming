#include "holberton.h"

/**
 * _puts_recursion - entry point
 * @s: Entry string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return;
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}
