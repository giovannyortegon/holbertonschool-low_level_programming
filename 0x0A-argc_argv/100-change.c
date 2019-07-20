#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -entry point
 * @argc: quantity arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{

	int num[5] = {25, 10, 5, 2, 1};
	int i = 0, m = 0, amount = 0;

	if (argc == 1)
	{
		puts("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		puts("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (amount >= num[i])
		{
			amount -= num[i];
			m++;
		}
	}
	printf("%d\n", m - 1);
	return (0);
}
