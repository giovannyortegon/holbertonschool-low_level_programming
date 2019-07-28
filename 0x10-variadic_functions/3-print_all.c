#include "variadic_functions.h"

/**
 * print_char - entry point
 * @a: get argument
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_int - entry point
 * @a: get argument
 */
void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}
/**
 * print_float - entry point
 * @a: get argument
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_string - entry point
 * @a: get argument
 */
void print_string(va_list str)
{
	char *s = va_arg(str, char*);

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

		while (pt[n].t)
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
