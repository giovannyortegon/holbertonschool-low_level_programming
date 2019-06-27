#include "holberton.h"

/**
 * _isdigit - Entry point
 * @c: store varible to test
 *
 * Return: 1 if it a digit or 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
