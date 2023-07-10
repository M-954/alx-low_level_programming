#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional grid
 * @grid: integer pointer to grid
 * @height: the height
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
