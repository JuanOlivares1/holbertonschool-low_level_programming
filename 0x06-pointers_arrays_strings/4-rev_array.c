#include "holberton.h"
/**
 * rev_array - reverse an int array.
 * @a: array to revert
 * @n: number of elements in array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	tmp = 0;

	for (i = 0; i <= j; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
