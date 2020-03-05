#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - concatenates 2 strings
 * @min: pointer to first stringmin number
 * @max: max number
 *
 * Return: pointer to array of ints
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i <= max - min; i++)
	{
		p[i] = i + min;
	}
	return (p);
}
