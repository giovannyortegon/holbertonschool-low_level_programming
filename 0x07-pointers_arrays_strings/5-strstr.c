#include "holberton.h"

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j] && haystack[i + 1 ] == needle[ i+1])
		{
			if(haystack[i] != ',' || (haystack[i] != ' ')
				return (haystack + i);
		}
		j++;
		i++;
	}
	return ('\0');
}
