#include "holberton.h"

/**
 * factorial - entry point
 * @n: entry variable
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
