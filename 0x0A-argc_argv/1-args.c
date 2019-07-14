#include <stdio.h>

/**
 * main - entry point
 * @argc:  count arguments
 * @argv: arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int n = 0;

	if (*(*argv + 1) == '\0')
	{
		printf("%d\n", n);
	}
	else
	{
		n = argc - 1;
		printf("%d\n",  n);
	}
	return (0);
}
