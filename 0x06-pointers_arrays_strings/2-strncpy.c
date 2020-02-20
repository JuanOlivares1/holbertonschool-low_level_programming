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
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for ( ; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
