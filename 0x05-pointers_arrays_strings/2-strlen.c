#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer to a string.
 *
 * Returns: int.
 */
int _strlen(char *s)
{
	int count, i;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;

	return (count);
}
