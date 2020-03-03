#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a marix of ints
 * @width: width
 * @height: heigth
 *
 * Return: pointer to matrix.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * width);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
		if (p[i] == NULL)
			return (NULL);
		for (j = 0; j < height; j++)
			p[i][j] = 0;
	}

	return (p);
}
