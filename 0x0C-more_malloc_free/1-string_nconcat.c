#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * string_nconcat - concatenates 2 strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of characters of second string to concatenate
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k = 0;

	for (i = 0; s1 && s1[i]; i++)
		;
	for (j = 0; s2 && s2[j]; j++)
		;
	if (n >= j)
		p = malloc((i + j + 1) * sizeof(char));
	else
		p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; s1 && s1[i]; i++)
	{
		p[i] = s1[i];
		k++;
	}
	if (n >= j)
		for (j = 0; s2 && s2[j]; j++)
		{
			p[k] = s2[j];
			k++;
		}
	else
	{
		for (j = 0; s2 && j < n; j++)
		{
			p[k] = s2[j];
			k++;
		}
	}
	p[k] = '\0';
	return (p);
}
