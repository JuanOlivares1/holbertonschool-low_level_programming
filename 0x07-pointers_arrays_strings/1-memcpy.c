#include "holberton.h"
/**
 * _memcpy - copies memory area to another area
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes of memory to fill
 *
 * Return: pointer to the memory pssition.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
