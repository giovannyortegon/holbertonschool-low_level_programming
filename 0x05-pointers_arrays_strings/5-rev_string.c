#include "holberton.h"

/**
 * rev_string - Entry point
 * @s:  Entry pointer
 */
void rev_string(char *s)
{
	int i, j, count;
	char arr[1000];

	i = 0;

	while (s[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}
	count  = i - 1;
	j = 0;
	while (count >= 0)
	{
		s[j] = arr[count];
		s[j + 1] = '\0';
		count--;
		j++;
	}
}
