#include "holberton.h"
/**
 * _strncpy - Copies a string into another
 * @src: string to be copied
 * @dest: destination string
 * @n: number of bytes to copy
 *
 * Return: char *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, k, j;

	for (i = 0; src[i] != '\0'; ++i)
		;

	for (k = 0; dest[k] != '\0'; ++k)
		;

	for (j = 0; j < k; j++)
	{
		if (j < n)
			dest[j] = src[j];
		else
			dest[j] = dest[j];
	}

	if (dest[j] != '\0')
		dest[j + 1] = '\0';

	return (dest);
}
