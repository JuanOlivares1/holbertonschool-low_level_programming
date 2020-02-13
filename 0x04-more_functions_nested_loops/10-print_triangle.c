#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: determines the size of the triangle.
 *
 * Return: Void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
