#include "holberton.h"

/**
 * _abs - Function
 * @a: Entry variable
 * Return: variable a according condition false or true
 */
int _abs(int a)
{
	if (a <= 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
