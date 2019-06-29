#include "holberton.h"

/**
 * times_table - Entry point
 */
void times_table(void)
{
	int a, b, c, d1, d2;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			d1 = (c / 10) + 48;
			d2 = (c % 10) + 48;
			if (a == 0 || b == 0)
			{
				if (a == 0 && b > 0)
				{
					_putchar(' ');
				}
				_putchar(d2);
			}
			else
			{
				if (d1 == '0')
				{
					_putchar(' ');
					_putchar(d2);
				}
				else
				{
					_putchar(d1);
					_putchar(d2);
				}
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
