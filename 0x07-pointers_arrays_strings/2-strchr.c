#include "holberton.h"

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	for (j = 0; s[i] != '\0'; i++, j++)
	{
		s[j] = s[i];
	}
/* s[j + 1] = '\0';*/
	return (s);
}
