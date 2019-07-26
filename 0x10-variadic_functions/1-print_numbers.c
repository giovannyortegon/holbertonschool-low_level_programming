#include "variadic_functions.h"

/**
 * print_numbers - entry point
 * @separator: get character colon
 * @n: arguments quantity
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int count;

	if (separator == NULL)
		separator = " ";
	va_start(args, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(args, int));
		if (count < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
}
