#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: Entry varable
 */
void print_to_98(int n)
{
	int b;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		if (n <= 98)
		{
			for (b = n; b <= 98; b++)
			{
				printf("%d", b);
				if (b != 98)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
		else
		{
			for (b = n; b >= 98; b--)
			{
				printf("%d", b);
				if (b != 98)
				{
					printf(", ");
				}
			}
			printf("\n");
		}
	}
}
