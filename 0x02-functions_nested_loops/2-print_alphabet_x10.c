#include "holberton.h"

/**
 * print_alphabet_x10 - function void.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0, alpha;

	while (i != 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
