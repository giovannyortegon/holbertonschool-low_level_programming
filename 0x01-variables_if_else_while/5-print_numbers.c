#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 0;
while (n <= 10)
{
if (n == 10)
{
printf("\n");
}
else
{
printf("%d", n);
}
n++;
}
return (0);
}
