#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid to be freed
 * @height: height of the grid to be freed
 *
 * Description: function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * Note that we will compile with your alloc_grid.c file.Make sure it compiles
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
