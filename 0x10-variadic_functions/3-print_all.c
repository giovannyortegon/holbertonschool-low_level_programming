#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_char - entry point
 * @a: get argument
 */
void print_char(va_list a)
{
	printf("%c", va_arg(a, int));
}
/**
 * print_int - entry point
 * @a: get argument
 */
void print_int(va_list a)
{
	printf("%i", va_arg(a, int));
}
/**
 * print_float - entry point
 * @a: get argument
 */
void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}
/**
 * print_string - entry point
 * @a: get argument
 */
void print_string(va_list a)
{
	char *s = va_arg(a, char*);

	if (s == NULL)
		printf("%p", s);
	else
		printf("%s", s);
}
/**
 * print_all - entry point
 * @format: get string for filter quality arguments
 */
void print_all(const char * const format, ...)
{
	format_t pt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list args;
	int i = 0, j;
	char *s = "";

	va_start(args, format);

	while (format[i] && format != NULL)
	{
		j = 0;

		while (pt[j].t)
		{
			if (pt[j].t[0] == format[i])
			{
				printf("%s", s);
				pt[j].f(args);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
