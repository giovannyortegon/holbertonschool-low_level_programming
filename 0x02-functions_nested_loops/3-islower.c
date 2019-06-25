#include "holberton.h"

/**
 * _islower - Function
 * @c: variable type int
 *
 * Return: rtn value
 */
int _islower(int c)
{
	int lower, upper, rtn;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
		{
			rtn = 1;
		}
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			rtn = 0;
		}
	}
	return (rtn);
}
