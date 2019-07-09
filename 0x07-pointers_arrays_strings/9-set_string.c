#include "holberton.h"
#include <stdio.h>

/**
 * set_string - entry point
 * @s: entry pointer
 * @to: entry pointer
 */
void set_string(char **s, char *to)
{
	s = &to;

	printf("%s %s\n", (*s), to);
}
