#include "holberton.h"
/**
 * _strlen - finds the length of a string.
 * @s: pointer to a string.
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int count, i;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;

	return (count);
}
