#include "3-calc.h"

/**
 * main - entry point
 * @argc: arguments number
 * @argv: double pointer to arguments
 * Return: O for success
 */
int main(int argc, char *argv[])
{
	/* Variables for the two entry numbers */
	int num1 = 0, num2 = 0;
	/* pointer functions to get_op_func */
	int (*calc)(int a, int b);
	/* accept only three arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* convert arguments to numbers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* calc to pint to get_op_func */
	calc = get_op_func(argv[2]);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	/* Print operation */
	printf("%d\n", calc(num1, num2));
	return (0);
}
