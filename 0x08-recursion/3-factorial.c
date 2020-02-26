#include "holberton.h"
/**
 * factorial - return the factorial of a number
 * @n: number to get its factorial
 *
 * Return: factorial result
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
