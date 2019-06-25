#include "holberton.h"

/**
 * print_last_digit - main function
 * @n: Entry variable
 * Return: variable mod return value
 */
int print_last_digit(int n)
{
	int mod;
	char num;

	if (n < 0)
	{
		mod = (n % 10) * (-1);
		num = (mod + '0');
		_putchar(num);
	}
	else
	{
		mod = n % 10;
		num = (mod + '0');
		_putchar(num);
	}
	return (mod);
}
