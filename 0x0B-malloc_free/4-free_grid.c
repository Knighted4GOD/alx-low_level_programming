#include "main.h"
#inlcude <stdlib.h>

/**
* free_grid -unction that frees a 2 dimensional grid previously
* @grid: pointer to pointer
* @height: height of grid
* Return: 0
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
