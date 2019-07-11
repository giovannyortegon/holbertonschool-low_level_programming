#include "holberton.h"

/*
 * is_prime_number
 * @n: entry variable
 * Return: 0 if it isn't prime or 1 if it is.
 */
int is_prime_number(int n)
{
	int tmp = 0;

	if (n == 1)
	{
		tmp = 0;
		return (1);
	}
	if (is_prime_number(n - 1) % 1 + is_prime_number(n - 1))
	{
		tmp++;
	}
	if (a != 2)
		return (0);
	else
		return (1);
}
