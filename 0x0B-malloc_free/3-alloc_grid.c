#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - check the code.
 * @width : variable
 * @height : variable
 * Return: 0 1
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (grid == NULL)
		return (NULL);
	i = 0;
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
