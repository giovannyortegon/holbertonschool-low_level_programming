#include "holberton.h"

/**
 * set_bit -  entry point
 * @n: entry number
 * @index: positions to move
 * Return: pointer modified
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (n == NULL)
		return (-1);

	mask <<= index;
	*n = *n | mask;

	return (1);
}
