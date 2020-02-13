#include "holberton.h"
/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: number of '\' characters to print.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j, count;

	count = 0;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < count; j++)
			if (count != 0)
				_putchar(' ');
		if (n > 0)
			_putchar('\\');
		_putchar('\n');
		count++;
	}
	if (n < 0)
		_putchar('\n');
}
