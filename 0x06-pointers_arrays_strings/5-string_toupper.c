#include "holberton.h"

/**
 * string_toupper - entry point
 * @l: entry pointer
 * Return:  variable l that contain the array
 */
char *string_toupper(char *l)
{
	int i = 0;
	char tmp;

	while (l[i] != '\0')
	{
		if (l[i] >= 97 && l[i] <= 122)
		{
			tmp = l[i] - 32;
			l[i] = tmp;
		}
		i++;
	}
	return (l);

}
