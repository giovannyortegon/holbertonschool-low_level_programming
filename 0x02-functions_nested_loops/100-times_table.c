#include "holberton.h"

/**
 * times_table - Entry point
 */
void print_times_table(int n)
{
	int a, b, c, d1, d2, d3;

	if (n >= 0 && n <= 15 )
	{
						
		for (a = 0; a <= n; a++)
		{
			for( b = 0; b <= n; b++)
			{
				c = a * b;
						
				if ( c >= 0 && c <=9)
				{
					if ( b != 0 && c >= 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
	
					d1 = c;
					_putchar(d1 + '0');
				}
				else
				{
					if (c >= 10 && c <=99)
					{
						if ( c >= 10)
						{
							_putchar(' ');
							_putchar(' ');
						}
						d1 = (c /10);
						_putchar(d1 + '0');
						d2 = (c % 10);
						_putchar(d2 + '0');
					}
					else
					{
						if(c >= 100)
						{
							_putchar(' ');
						}
						d1 = (c / 100);
						_putchar(d1 + '0');
						d2 = ((c / 10) % 10);
						_putchar(d2 + '0');
						d3 = (c % 10);
						_putchar(d3 + '0');
					}
				}if (b != n)
				{
					_putchar(',');
				
				}
						
			}	
			_putchar('\n');
		}
	}
}
