#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, a, (61));
return (1);
}
