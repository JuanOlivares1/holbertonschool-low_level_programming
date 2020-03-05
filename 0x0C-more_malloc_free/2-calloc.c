#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: pointer to first string
 * @size: pointer to second string
 *
 * Return: void pointer to mem allocation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	p = malloc(nmemb * size);

	if (nmemb == 0 || size == 0 || p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

	return (p);
}
