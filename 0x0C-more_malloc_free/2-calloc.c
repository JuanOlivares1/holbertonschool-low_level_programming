#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - concatenates 2 strings
 * @nmemb: pointer to first string
 * @size: pointer to second string
 *
 * Return: pointer to new string
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return ((void *)p);
}
