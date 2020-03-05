#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * malloc_checked - asd
 * @b: asd
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}
