#include "holberton.h"


char *rot13(char *rt)
{
	int i = 0 , j;
	char rI[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rO[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"; 

	while (rt[i])
	{
		for (j = 0; rI[j] != '\0'; j++)
		{
			if (rt[i] == rI[j])
			{
				rt[i] = rO[j];
			}
		}
		i++;
	}
	
	return (rt);
}
