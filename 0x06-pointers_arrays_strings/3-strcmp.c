#include "holberton.h"

/**
 * _strcmp -entry point
 * @s1: entry pointer
 * @s2: entry pointer
 * Return: res wiht bigger ASCII
 */
int _strcmp(char *s1, char *s2)
{
	int res;

	res = s1[0] - s2[0];

	return (res);
}
