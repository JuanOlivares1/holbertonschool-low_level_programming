#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers from the argument to 98.
 * @n: Number wher the secuence starts.
 *
 * Return: Void.
*/
void print_to_98(int n)
{
	int i;

	i = n;

	if (n <= 98)
	{
		while (i < 99)
		{
			printf("%d", i);
			if (i < 98)
				printf(", ");
			i++;
		}
	} else if (n >= 98)
	{
		while (i > 97)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");
			i--;
		}
	}
	putchar('\n');
}
