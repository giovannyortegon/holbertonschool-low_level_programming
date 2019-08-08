#include "holberton.h"
/**
 * binary_to_uint - entry point
 * @b: string with information about binary number
 * Return: a decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, exp = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (res);

	while (b[i])
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			if (b[i] == '1')
			{
				res += _pow(2, exp);
				exp++;
			}
			else
			{
				exp++;
			}
		}
		else
		{
			res = 0;
			return (res);
		}
	}
	return (res);

}
/**
 * _pow - entry point
 * @base: decimal base number
 * @exp: decimal expone number
 * Return: power of number
 */
int _pow(int base, int exp)
{
	int i = 0, res = 1;

	if (exp == 0)
		return (res);
	while (i < exp)
	{
		res *= base;
		i++;
	}
	return (res);
}
