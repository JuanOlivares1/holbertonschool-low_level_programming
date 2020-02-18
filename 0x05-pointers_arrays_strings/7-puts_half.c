#include "holberton.h"
/**
 * puts_half - prints the second half of a string.
 * @str: string to print
 *
 * Returns: void.
 */
void puts_half(char *str)
{
	int i, n, count;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	count--;

	if (count % 2 == 1)
	{
		n = (count - 1) / 2;
	} else
		n = count / 2;

	n++;

	for (i = n; i <= count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
