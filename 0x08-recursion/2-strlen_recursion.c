#include "holberton.h"

/**
 * _strlen_recursion - entry point
 * @s: entry pointer
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int n  = 0;

	if (s[i] != '\0')
	{
		n = 1 +	_strlen_recursion(s + 1);
	}
	return (n);
}
