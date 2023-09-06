#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - it frees 2d array
 * @grid: 2d grid
 * @height: the height dimension of a grid
 * Description: frees memory of a grid
 * Return: nothing
 *
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

