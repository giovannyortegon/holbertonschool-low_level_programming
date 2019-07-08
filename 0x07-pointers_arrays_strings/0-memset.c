#include "holberton.h"

/**
 * _memset -  Entry point
 * @s: entry of main array
 * @b: character to repalce
 * @n: times numbers
 * Return: value of s modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
