#include "main.h"

/**
 * free_grid - free up a 2d array grid
 *
 * @grid: double pointer to int
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
