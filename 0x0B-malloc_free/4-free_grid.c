#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @height: integer
 * @grid: integer charachter
 * Return: NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
