#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - entry point
 * @s: get sign to operate
 * Return: NULL if cant do operation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i <= 5; i++)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
	}
	/* Return NULL if it can't operate */
	return (NULL);
}
