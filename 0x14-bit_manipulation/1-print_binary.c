#include "holberton.h"
/**
 * print_binary - entry point
 * @n: entry number to convert
 **/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x8000;
	int up = 0;

	while (mask != 0)
	{
		if ((n & mask) > 0)
		{
			up = n & mask;
			break;
		}
		mask >>= 1;
	}
	mask = up;

	if (n != 0)
	{
		while (mask != 0)
		{
			if ((n & mask) == 0)
				_putchar('0');
			else
				_putchar('1');
			mask >>= 1;
		}
	}
	else
		_putchar('0');
}
