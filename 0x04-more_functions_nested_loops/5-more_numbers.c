#include "holberton.h"

/**
 * more_numbers - Entry point
 */
void more_numbers(void)
{
	int i, d1, d2;

	i = 0;
	while (i < 10)
	{
		for (d1 = '0'; d1 <= '1'; d1++)
		{
			for (d2 = '0'; d2 <= '9'; d2++)
			{
				if (d1 != '0')
				{
					_putchar(d1);
				}
				_putchar(d2);
				if (d1 == '1' && d2 == '4')
				{
					break;
				}
			}
		}
		i++;
		_putchar('\n');
	}

}
