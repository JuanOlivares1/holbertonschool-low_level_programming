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
        void *p;
	int *p1;

        p1 = malloc(i);

        if (nmemb == 0 || size == 0 || p1 == NULL)
	{
                free(p1);
		return (NULL);
	}

        for (i = 0; i < size; i++)
                p1[i] = 0;

	p = &p1[0];

        return (p);
}
