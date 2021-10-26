#include "main.h"
#include <stdlib.h>
#include<stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: the grid we want to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
