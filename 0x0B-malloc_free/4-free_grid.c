#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to 2 dim array
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
