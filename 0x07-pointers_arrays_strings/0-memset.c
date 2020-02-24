#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory position to start filling
 * @b: constant byte to insert on memory
 * @n: number of bytes of memory to fill
 *
 * Return: pointer to the memory pssition.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
