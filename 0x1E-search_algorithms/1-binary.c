#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array:	Pointer to an array
 * @size:	Length of the array
 * @value:	Value of an element of an array
 * Return: -1 if is null or no exist or position
 */
int binary_search(int *array, size_t size, int value)
{
	size_t central, up, down, i = 0;
	int ValueCentral;

	down = 0;
	up = size - 1;

	if (array == NULL)
		return (-1);

	while (down <= up)
	{
		printf("Searching in array: ");
		for ( ; i <= up; i++)
		{
			printf("%d", array[i]);
			if (i != up)
				printf(", ");
		}
		putchar('\n');
		central = (down + up) / 2;
		ValueCentral  = array[central];

		if (value == ValueCentral)
			return (central);
		else if (value < ValueCentral)
			up = central - 1;
		else
			down = central + 1;
		i = down;
	}
	return (-1);
}
