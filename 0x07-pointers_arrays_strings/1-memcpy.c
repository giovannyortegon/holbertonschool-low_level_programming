#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	while (dest[i])
	{
		dest[i] = '4';
		i++;	
	}
	return (dest);
}
