#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct function_type - entry signs
 *
 * @t: type of variables
 * @f: function to print type of variable
*/
typedef struct print_type
{
	char *t;
	void (*f)(va_list);
} format_t;

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

#endif /* VARIADIC_FUNCTIONS.H */
