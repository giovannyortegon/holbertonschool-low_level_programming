#include "holberton.h"
#include <stdlib.h>

/**
 * strdup - call to pointer for copying in another
 * @str: string pointer
 * Return: nstr is string in new pointer
 */
char *_strdup(char *str)
{
	char *ns;
	int i, size;

	if (str == NULL)
		return (NULL);
	size = sizeof(str) + 1;
	nstr = (char *) malloc(size * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
