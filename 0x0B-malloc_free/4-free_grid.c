#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - entry point
 * @grid: array
 * @height: rows of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
