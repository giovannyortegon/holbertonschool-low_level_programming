#include "holberton.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum1; 
	i = 0;

	while (i < size * size)
	{
		sum1 += a[i];
		i = (size + 1) + i;
	}
			
		
	printf("%d\n", sum1);
}
