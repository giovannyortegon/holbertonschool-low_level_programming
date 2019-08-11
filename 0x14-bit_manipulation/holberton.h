#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
int _putchar(char c);

unsigned int binary_to_uint(const char *b);
int _pow(int base, int exp);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int mask_bin(unsigned long int n);
int set_bit(unsigned long int *n, unsigned int index);

#endif
