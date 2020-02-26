#include "holberton.h"
/**
 * _sqrt - try numbers till find a natural sqrt or till know there's no one
 * @i: iterator
 * @n: number to sqrt
 *
 * Return: natural square root result or -1 if there's no natural square root
 */
int _sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - returns the square root of @n
 * @n: number to sqrt
 *
 * Return: square root of @n
 */
int _sqrt_recursion(int n)
{
	int r = _sqrt(1, n);

	return (r);
}
