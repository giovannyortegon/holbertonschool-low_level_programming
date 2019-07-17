#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - call to pointer for copying in another
 * @str: string pointer
 * Return: nstr is string in new pointer
 */
char *_strdup(char *str)
{
	char *nstr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	size += 1;

	nstr = (char *) malloc(size * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		nstr[i] = str[i];
	}
	return (nstr);
}
