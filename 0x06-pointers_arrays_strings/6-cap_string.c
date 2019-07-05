#include "holberton.h"

/**
 * cap_string - entry point
 * @cap: entry pointer array
 * Return: Cap with change
 */
char *cap_string(char *cap)
{
	int i;
	char tmp;

	i = 0;

	while (cap[i] != '\0')
	{
		if (cap[i] == 32 && (cap[i + 1] >= 97 && cap[i + 1] <= 122))
		{
			tmp = cap[i + 1] - 32;
			cap[i + 1] = tmp;
		}
		if (cap[i] == '\t' && (cap[i + 1] >= 97 && cap[i + 1] <= 122))
		{
			cap[i] = 32;
			tmp = cap[i + 1] - 32;
			cap[i + 1] = tmp;
		}
		if (cap[i] == '\n' && (cap[i + 1] >= 97 && cap[i + 1] <= 122))
		{
			tmp = cap[i + 1] - 32;
			cap[i + 1] = tmp;
		}
		if (cap[i] == 46 && (cap[i + 1] >= 97 && cap[i + 1] <= 122))
		{
			tmp = cap[i + 1] - 32;
			cap[i + 1] = tmp;
		}
		i++;
	}
	return (cap);
}
