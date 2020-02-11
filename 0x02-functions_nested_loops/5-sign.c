#include "holberton.h"
/**
 * print_sign - tells if the argument is a possitive or negative number, or 0.
 * @n: the number to test.
 *
 * Return: 1 if n is positive, 0 if n zero,
 * and -1 if n is negative. -2 if error.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (-2);
}
