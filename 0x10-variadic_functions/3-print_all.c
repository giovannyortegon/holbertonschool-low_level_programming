#include "variadic_functions.h"
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
	int m = 0, n;
	char *s = "";

	va_start(args, format);

	while (format != NULL && format[m])
	{
		n = 0;

		while (a < 4)
		{
			if (pt[n].t[0] == format[m])
			{
				printf("%s", s);
				pt[n].f(args);
				s = ", ";
				break;
			}
			n++;
		}
		m++;
	}
	printf("\n");
	va_end(args);
}
