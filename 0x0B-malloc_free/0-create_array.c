#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars with the size given on args
 *                and initialices it with a specific char.
 * @size: length of string
 * @c: char to fill the array.
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
