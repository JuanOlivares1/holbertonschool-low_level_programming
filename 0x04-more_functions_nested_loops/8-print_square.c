#include "holberton.h"
/**
 * print_square - function that draws a straight line in the terminal.
 * @size: size of square.
 *
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
