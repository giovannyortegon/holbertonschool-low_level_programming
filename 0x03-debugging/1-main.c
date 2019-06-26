#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	/* @i: variables is defined */
	int i;
	/* printf - show out */
	printf("Infinite loop incoming :(\n");
	/* @i: is decared */
	i = 0;
	/* while - start the loop */
	while (i < 10)
	{
		putchar(i);
	}
	/* printf - Show finished out */
	printf("Infinite loop avoided! \\o/\n");
	return (0);
}
