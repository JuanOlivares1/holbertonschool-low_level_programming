#include "holberton.h"
/**
 * swap_int - swap the value of two variables by its pointers.
 * @a: pointer of variable to swap
 * @b: pointer of variable to swap
 *
 * Returns: void.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
