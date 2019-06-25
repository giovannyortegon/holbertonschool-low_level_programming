#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char a[] = "Holberton\n";

	for(i = 0; a[i] != '\0'; i++)
	{
		_putchar(a[i]);
	}

	return (0);
}
