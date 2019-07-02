#include "holberton.h"

/**
 * _strlen - Entry point
 * @s: Entry pointer type character
 * Return: count print the lenght of string
 */
int _strlen(char *s)
{
	int i, count;

	while (s[i] != '\0')
	{
		i++;
	}
	count = i;

	return (count);
}
