#include "holberton.h"
/**
 * _prime - evaluates if is prime
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if @n is prime. 0 otherwise
 */
int _prime(int n, int i)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (_prime(n, i + 1));
}

/**
 * is_prime_number - say if @n is a prime number or not
 * @n: number review
 *
 * Return: 1 if @n is prime. 0 otherwise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	else
		return (_prime(n, i));
}
