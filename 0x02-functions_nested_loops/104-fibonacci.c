#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
	double a, b, c; 
	int i;

	a = 0;
	b = 1;
	c = 0;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%.lf\n", c);
	}
	return (0);
}
