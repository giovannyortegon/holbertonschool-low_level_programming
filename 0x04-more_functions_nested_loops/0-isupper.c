#include "holberton.h"

/**
 * _isupper - Entry point.
 * Return: 1 is it is upper or 0 otherwise.
 * @c: store the character.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
