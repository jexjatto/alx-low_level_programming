#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array previously allocated
 * @grid: pointer to pointer
 * @height: row of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
