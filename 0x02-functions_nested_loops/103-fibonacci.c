#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	unsigned long long a, b, c, i;

	a = 0;
	b = 1;
	c = 0;

	for (i = 0; i <= 98; i++)
	{
		if (i % 2 == 0 && c <= 4000000)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%llu\n", c);
		}
	}
	return (0);
}
