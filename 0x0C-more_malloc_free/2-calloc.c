#include <stdlib.h>
#include <stdio.h>
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
	unsigned int i = nmemb * size;
        char *p;

        p = malloc(i);

        if (nmemb == 0 || size == 0 || p == NULL)
	{
                free(p);
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
		p[i] = 0;

        return (p);
}
