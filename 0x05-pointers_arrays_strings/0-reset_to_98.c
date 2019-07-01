#include "holberton.h"

/**
 * reset_to_98 - Entry point
 * @n: pointer entry
 */
void reset_to_98(int *n)
{
	int **ptr = &n;

	**ptr = 98;
}
