#include "holberton.h"
/**
 * print_last_digit - gives the last digit of a number
 * @n: the number to test.
 *
 * Return: the value of the last digit of argument.
 */
int print_last_digit(int n)
{
	n %= 10;
	_putchar(n);
	return (n);
}
