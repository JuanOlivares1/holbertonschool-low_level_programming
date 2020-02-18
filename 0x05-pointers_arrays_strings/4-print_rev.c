#include "holberton.h"
/**
 * print_rev - prints a string in reverse.
 * @s: string to print
 *
 * Returns: void.
 */
void print_rev(char *s)
{
	int i, count;

	for (i = 0; *(s + i) != '\0'; i++)
		count++;

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
