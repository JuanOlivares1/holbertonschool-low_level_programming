#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to string.
 */
char *str_concat(char *s1, char *s2)
{
	char * p;
	int i, j, size;

	for (i = 0; s1[i]; ++i)
		;
	for (j = 0; s2[j]; ++j)
		;

	size = i + j + 1;

	p = malloc(size);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; s1[i]; ++i)
                p[i] = s1[i];
        for (j = 0; s2[j]; ++j)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}
