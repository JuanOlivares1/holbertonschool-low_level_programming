#include "holberton.h"
/**
 * _abs - gives the absolute value of argument
 * @n: the number to convert.
 *
 * Return: the absolute value of argument.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
	}
	return (n);
}
