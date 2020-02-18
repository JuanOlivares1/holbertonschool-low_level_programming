#include "holberton.h"

/**
 * _strlen - find the legth of a string
 * @s: string to find its size
 *
 *
 * Returns: string's length.
 */
int _strlen(char *s)
{
	int count, i;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;

	return (count);
}
