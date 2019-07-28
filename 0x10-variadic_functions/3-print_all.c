#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_c - print char
 *@c: char
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 *print_s - print string
 *@s: string
 */
void print_s(va_list s)
{
	char *string = va_arg(s, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 *print_i - print integer
 *@i: integer
 *Return: ntg
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *print_f - print float
 *@f: float
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *print_all - prints anything.
 *@format: list of arguments
 */

void print_all(const char * const format, ...)
{
	print_t valu[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	int i, a;
	char *s = "";

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i])
	{
		a = 0;
		while (a < 4)
		{
			if (valu[a].p[0] == format[i])
			{
				printf("%s", s);
				(valu[a].f(valist));
				s = ", ";
				break;
			}
			a++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
