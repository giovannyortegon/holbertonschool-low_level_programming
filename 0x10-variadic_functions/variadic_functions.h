#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct function_type - Struct op
 *
 * @t: type of variables
 * @f: function to print type of variable
*/
typedef struct function_type
{
	char *t;
	void (*f)(va_list);
} format_t;

#endif /* VARIADIC_FUNCTIONS.H */
