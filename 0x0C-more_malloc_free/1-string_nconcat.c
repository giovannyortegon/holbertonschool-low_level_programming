#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1:	first string
 * @s2: second string
 * @n: lenght for adding
 * Return: new pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int c1 = 0, c2 = 0;
	char *new = NULL;

	while (s1[i])
		i++;
	c1 = i + 1;
	while (s2[j])
		j++;
	c2 = j++;
	new = (char *) malloc(c1 * sizeof(char));
	if (new == NULL)
		return (new);
	for (i = 0; i < c1; i++)
	{
		new[i] = s1[i];
		new[i + 1] = '\0';
	}
	if (n >= c2)
	{
		new = (char *) realloc(new, ((c1 + c2) + 1) * sizeof(char));
		for (j = 0; s2[j] != '\0'; c1++, j++)
		{
			new[c1 - 1] = s2[j];
			new[c1 + 1] = '\0';
		}
	}
	else
	{
		new = (char *) realloc(new, ((c1 + n) + 1) * sizeof(char));
		for (j = 0; j < n; j++, c1++)
		{
			new[c1 - 1] = s2[j];
			new[c1 + 1] = '\0';
		}
	}
	return (new);
}
