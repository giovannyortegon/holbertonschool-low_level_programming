#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */
int main(void)
{
int a, b, c;

for (a = 48; a < 58; a++)
{
for (b = a; b < 58; b++)
{
for (c = b; c < 58; c++)
{
if (a != b && b != c && a < b && b < c)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56 || c != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
