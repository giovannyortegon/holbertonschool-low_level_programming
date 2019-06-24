#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int name, i = 0;
	char a[] = "Holberton\n";

	while (a[i] != '\0')
	{
		name = _putchar(a[i]);
		i++;
	}
	return (name);
}
