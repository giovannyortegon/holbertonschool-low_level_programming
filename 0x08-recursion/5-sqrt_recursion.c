#include "holberton.h"

/**
 * calc - entry point
 * @n: entry number
 * @i: entry number times
 * Return: calc to _sqrt_recursion
 */
int calc(int  n, int  i)
{
	if (i * i == (n))
	{
		return (i);
	}
	else if (i > (n / 2))
	{
		return (-1);
	}
	else
	{
		return (calc(n, i + 1));
	}
}
/**
 * _sqrt_recursion - entry point
 * @n: entry variable
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (calc(n, i));
}
