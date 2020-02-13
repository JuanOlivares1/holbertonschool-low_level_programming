#include "holberton.h"
/**
 * _isdigit - tells if c is a digit (0 - 9)
 * @c: digit to test
 *
 * Return: 1 if c is a digit. 0 otherwise.
 */
int _isdigit(int c)
{
	char d;

	d = c;

	if (d >= 48 && d <= 57)
		return (1);
	else
		return (0);
}
