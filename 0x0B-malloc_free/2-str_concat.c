#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - recive two strings
 * @s1: first string
 * @s2: second string
 * Return: a string concattning first and second string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, szt = 0;
	int sz1 = 0, sz2 = 0;
	char *s0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;

	sz1 = i++;
	while (s2[j] != '\0')
		j++;
	sz2  = j++;
	szt = sz1 + sz2;
	s0 = (char *) malloc(szt * sizeof(char));
	if (s0 == NULL)
		return (NULL);

	for (i = 0; i <= sz1 ; i++)
		s0[i] = s1[i];

	for (j = 0; sz1 <= szt; j++, sz1++)
		s0[sz1] = s2[j];
	s0[sz1 + 1] = '\0';
	return (s0);
}
