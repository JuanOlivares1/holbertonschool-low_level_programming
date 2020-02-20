#include "holberton.h"
/**
 * _strncat - Concatenates 2 strings
 * @src: string to add
 * @dest: final string
 * @n: number of bytes to concatenate
 *
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; ++i)
		;

	for (j = 0; src[j] != '\0'; ++j)
		;

	for (k = 0; k < n; k++)
	{
		dest[i] = src[k];
		i++;
	}

	if (dest[i] != '\0')
		dest[i] = '\0';

	return (dest);
}
