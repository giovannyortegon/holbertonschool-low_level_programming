#include "holberton.h"

/**
 * print_sign - Function
 * @n: Entry variable
 * Return: rtn value
 */
int print_sign(int n)
{
	int rtn;

	if (n == 0)
	{
		_putchar('0');
		rtn = 0;
	}
	else
	{
		if (n > 0)
		{
			_putchar('+');
			rtn = 1;
		}
		else
		{
			_putchar('-');
			rtn = -1;
		}
	}
	return (rtn);
}
