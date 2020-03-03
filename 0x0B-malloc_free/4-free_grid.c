#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free a matrix allocated space on memory
 * @grid: matrix
 * @height: height of matrix
 *
 * Return: pointer to string.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < hight; i++)
		free(grid[i]);
	free(grid);
}
