#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: count arguments
 * @argv: vector of string
 * Return:  Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int n1 = 0, n2 = 0, mul = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
		return (0);
	}
}
