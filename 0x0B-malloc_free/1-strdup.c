#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - copy a string and stores it on a newlly memory allocation
 * @str: string to copy
 *
 * Return: pointer to array.
 */
char *_strdup(char *str)
{
	int i, size;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	size = i;

	p = malloc(size + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
