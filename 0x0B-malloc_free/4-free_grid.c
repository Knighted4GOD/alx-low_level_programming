#include "main.h"
#include <stdlib.h>

/**
* free_grid - function that fress 2D grid in alloc_grid
* @grid: memory to be freed
* @height: height of array
* Return: 0
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid)
}
