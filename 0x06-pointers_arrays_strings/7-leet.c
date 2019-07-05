#include "holberton.h"
/**
 * leet - Entry point
 * @l: Entry pointer
 * Return: A variable 'l' modified.
 */
char *leet(char *l)
{
	int i = 0, j;
	char l1[] = "aeotl"; 
	char l2[] = "AEOTL";
	char l3[] = "43071";

	while (l[i] != '\0')
	{
		for (j = 0; l1[j] != '\0'; j++)
		{
			if (l[i] == l1[j] || l[i] == l2[j])
			{
				l[i] = l3[j];	
			}
		}
		i++;
	}
	return (l);
}
