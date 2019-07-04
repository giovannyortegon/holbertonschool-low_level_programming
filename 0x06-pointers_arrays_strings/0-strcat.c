#include "holberton.h"

/**
 * _strcat - Entry pointt
 * @dest: Out pointer
 * @src: Entry pointer
 * Return: dest concatenate
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);

}
