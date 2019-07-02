#include "holberton.h"

/**
 * rev_string - Entry point
 * @s:  Entry pointer
 */
void rev_string(char *s)
{
	int i, j, count;
	char p_arr[100];

	i = 0;

	while (s[i] != '\0')
	{
		p_arr[i] = s[i];
		p_arr[i + 1] = '\0';
		i++;
	}

	count = i - 1;
	j = 0;
	while (count >= 0)
	{
		s[j] = p_arr[count];
		s[j + 1] = '\0';
		count--;
		j++;
	}
}
