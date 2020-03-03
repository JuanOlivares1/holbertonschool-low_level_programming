#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy a tring and stores it on a new memory allocation
 * @str: string to copy
 *
 * Return: pointer to array.
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	for (i = 0; str[i]; i++)
		;

	p = malloc(i);

	if (str == NULL || p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		p[j] = str[j];
	}
	return (p);
}
