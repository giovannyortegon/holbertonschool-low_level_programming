#include "holberton.h"

/**
 * _strcmp -entry point
 * @s1: entry pointer
 * @s2: entry pointer
 * Return: res wiht bigger ASCII
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	res = 0;

	for (i = 0; s1[i] != '\0' && res == 0; i++)
		res = s1[i] - s2[i];

	return (res);
}
