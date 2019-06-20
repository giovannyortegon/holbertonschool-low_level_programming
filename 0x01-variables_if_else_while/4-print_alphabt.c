#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
for (a = 97; a < 123; a++)
{
if (a == 'e' || a == 'q')
{
continue;
}
putchar(a);
}
putchar('\n');
return (0);
}
