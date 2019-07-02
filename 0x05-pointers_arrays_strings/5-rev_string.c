#include "holberton.h"
#include <string.h>

/**
 * rev_string - Entry point
 * @s:  Entry pointer
 */
void rev_string(char *s)
{
	int i, j, count;
	char tmp;
	char p_arr[10] = "";

	i = 0;

	while (s[i] != '\0')
	{
		tmp = s[i];
		p_arr[i] = tmp;
		i++;
	}

	count = i - 1;
	j = 0;
	while (count >= 0)
	{
		tmp = p_arr[count];
		s[j] = tmp;
		count--;
		j++;
	}
}
