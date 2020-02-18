#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints number of elements given of an array.
 * @a: string to print
 * @n: number of elements to print
 *
 * Returns: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
