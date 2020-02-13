#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n / 10000 != 0)
	{
		_putchar((n / 10000) + '0');
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n / 1000 != 0)
	{
		_putchar((n / 1000) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n / 100 != 0)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n / 10 != 0)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else
	{
		_putchar(n + '0');
	}
}
