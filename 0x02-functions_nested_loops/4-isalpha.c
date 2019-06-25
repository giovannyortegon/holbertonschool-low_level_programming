#include "holberton.h"

/**
 * _isalpha - Function
 * @c: Varible type integer
 * Return: value of rtn variable
 */
int _isalpha(int c)
{
	int lower, upper, rtn = 0;

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
			rtn = 1;
		}
	}
	return (rtn);
}
