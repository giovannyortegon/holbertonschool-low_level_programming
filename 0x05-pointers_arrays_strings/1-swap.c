#include "holberton.h"

/**
 * swap_int -entry point
 * @a: Entry pointer
 * @b: Entry pointer
 */
void swap_int(int *a, int *b)
{
	int tmp;

	 tmp = *a;
	 *a = *b;
	 *b = tmp;
}
