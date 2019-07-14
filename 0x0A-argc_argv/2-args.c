#include <stdio.h>

/**
 * main - entry pointt
 * @argc: numbers of arguments
 * @argv: argiments
 * Return:  Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
