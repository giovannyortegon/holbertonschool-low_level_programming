#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: double pointer
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i = 0;

	i = argc;

	printf("%s\n", argv[i - 1]);
	return (0);
}
