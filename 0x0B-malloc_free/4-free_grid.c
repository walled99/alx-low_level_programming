#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 *
 * Description: free
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: void (no return)
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
