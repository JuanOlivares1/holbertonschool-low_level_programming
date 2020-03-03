#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to string.
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;

	p = malloc(i + j + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; s1 && s1[i]; ++i)
	{
		p[i] = s1[i];
	}
	for (j = 0; s2 && s2[j]; ++j)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';

	return (p);
}
