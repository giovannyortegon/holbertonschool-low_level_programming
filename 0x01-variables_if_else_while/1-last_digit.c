#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, r;
srand(time(0));
n = rand() - RAND_MAX / 2;
r = n % 10;
if (r == 0)
{
printf("Last digit of %d is %d and is 0", n, r);
}
else
{
if (r > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, r);
}
else if (n % 10 < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, r);
}
}
return (0);
}
