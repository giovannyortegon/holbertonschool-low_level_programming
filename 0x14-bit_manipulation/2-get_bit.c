#include "holberton.h"
/**
 * get_bit- entry point
 * @n: entry number to convert
 * @index: position to search
 * Return: value of position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0x8000;
	unsigned int i = 0, count = 0;
	int num[1024],  value = 0;

	mask = mask_bin(n);

	while (mask != 0)
	{
		if ((n & mask) == 0)
			num[i] = 0;
		else
			num[i] = 1;
		mask >>= 1;
		i++;
	}
	count = i - 1;
	value = num[count - index];
	return (value);
}
/**
 * mask_bin - entry point
 * @n: number to know the bits
 * Return: length bits
 */
int mask_bin(unsigned long int n)
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
	return (up);
}

