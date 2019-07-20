#include "holberton.h"

/**
 * rot13 - Entry point
 * @rt: Entry pointer
 * Return: codificated string in rot13
 */
char *rot13(char *rt)
{
	int i = 0, j;
	char rI[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rO[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (rt[i])
	{
		for (j = 0; rI[j] != '\0'; j++)
		{
			if (rt[i] == rI[j])
			{
				rt[i] = rO[j];
				break;
			}
		}
		i++;
	}
	return (rt);
}
