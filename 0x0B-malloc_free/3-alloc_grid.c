#include "main.h"
#include <stdio.h>

/**
 * str_concat - check the code.
 * @s1 : variable
 * @s2 : variable
 * Return: 0 1
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid = calloc(height, sizeof(*grid));

	if (grid == NULL)
		return (0);
	i = 0;
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			do {
				free(grid[i]);
				i--;
			} while (i > 0);
			free(grid);
			return (0);
		}
	}

	return (grid);
}
