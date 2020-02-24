#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals
 * @a: matrix
 * @size: square size
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0, diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				diag1 += a[k];

			if (i + j + 1 == size)
				diag2 += a[k];
			k++;
		}
	}
	printf("%i, %i\n", diag1, diag2);
}
