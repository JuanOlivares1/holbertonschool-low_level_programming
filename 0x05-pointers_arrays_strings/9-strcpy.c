#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - prints number of elements given of an array.
 * @dest: string to print
 * @src: number of elements to print
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}

	return (dest);
}
