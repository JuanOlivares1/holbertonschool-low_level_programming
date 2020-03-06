#include <stdlib.h>
#include "holberton.h"
/**
 * _realloc - concatenates 2 strings
 * @ptr: pointer to first stringmin number
 * @old_size: old size
 * @new_size: new size
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *ptr2 = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		return (p);
	} else if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
			p[i] = ptr2[i];
	} else if (new_size < old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(p);
			return (NULL);
		}
		for (i = 0; i < new_size; i++)
			p[i] = ptr2[i];
	}
	free(ptr);
	return (p);
}
