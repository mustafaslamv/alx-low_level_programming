#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid previously created
 * @grid: grid of memories
 * @height: int
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
