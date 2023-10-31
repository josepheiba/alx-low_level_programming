#include "main.h"
#include <stdio.h>

/**
 * free_grid - check the code.
 * @grid : variable
 * @height : variable
 * Return: 0 1
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
