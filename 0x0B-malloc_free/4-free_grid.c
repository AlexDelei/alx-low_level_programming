#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the memory
 * @grid: grid
 * @height: the height
 *
 */
void free_grid(int **grid, int height)
{
	int i;
	int h;

	h = height;
	/*freeing memory for each row*/
	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}

	/*freeing memory of the array of pointers*/
	free(grid);
}
