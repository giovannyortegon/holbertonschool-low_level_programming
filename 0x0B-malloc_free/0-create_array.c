#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: byte
 * @c: Character to replace
 * Return: Null if it is empty
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *) malloc(size * sizeof(*s));
	
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;	
	}
	return (s);
}
