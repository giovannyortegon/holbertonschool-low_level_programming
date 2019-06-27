#include "holberton.h"

/**
 * _isdigit - Entry point
 * @c: store varible to test
 *
 * Return: 1 if it a digit or 0 otherwise.
 */
int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
	{
		a = 1;
	}
	else
	{
		a = 0;
	}
	return (a);
}
