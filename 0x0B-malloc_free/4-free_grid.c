/**
 * free_grid - frees a 2 dimensional grid memory
 * @grid: 2d dynamic allocated array
 * @height: no. of pointers grid points to
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
