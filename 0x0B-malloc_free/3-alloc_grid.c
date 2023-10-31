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
	int **grid = malloc(height * sizeof(*grid));

	if (width <= 0 || height <= 0)
		return (0);

	if (grid == NULL)
		return (0);
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
