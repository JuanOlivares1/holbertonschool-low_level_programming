#include "holberton.h"

void print_n(unsigned long int n);

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	} else
		print_n(n);
}

/**
 * print_n - prints last binary character
 * @n: number to print
 *
 * Return: void
 */
void print_n(unsigned long int n)
{
        if (n == 0)
                return;
	print_n(n >> 1);
	_putchar((n & 1) + '0');
}
