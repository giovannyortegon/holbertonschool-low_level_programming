#include "holberton.h"

/**
 * cap_string - entry point
 * @cap: entry pointer array
 * Return: Cap with change
 */
char *cap_string(char *cap)
{
	int i, j;
	char car[] = "}\n,;.!?\"(){ ";

	i = 0;

	while (cap[i] != '\0')
	{
		for (j = 0; car[j] != '\0'; j++)
		{
			if (cap[i] == car[j] && cap[i + 1] >= 97 && cap[i + 1] <= 122)
			{
				cap[i + 1] -= 32;
			}
			if (cap[i] == '\t' && cap[i + 1] >= 97 && cap[i + 1] <= 122)
			{
				cap[i] = ' ';
				cap[i + 1] -= 32;
			}
		}
		i++;
	}
	return (cap);
}
