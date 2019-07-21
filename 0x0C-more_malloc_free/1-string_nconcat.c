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
	unsigned int i = 0, j = 0, cnt = 0;
	char *new;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		cnt = i + j;
	else
		cnt = i + n;
	new = (char *) malloc((cnt + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[i] = s1[i];
	for (j = 0 ; i < cnt; j++)
	{
		new[i++] = s2[j];
		new[i + 1] = '\0';
	}
	return (new);
}
