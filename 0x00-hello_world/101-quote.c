#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;
char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (a[i] != '\0')
{
putchar(a[i]);
i++;
}
return (1);
}
