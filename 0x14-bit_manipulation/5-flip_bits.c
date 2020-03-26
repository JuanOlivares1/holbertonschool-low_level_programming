#include "holberton.h"

/**
 * flip_bits - returns the number of bits you need to flip to
 *             get one number to another
 * @n: first number
 * @m: second number
 *
 * Return: 1 if success. -1 otherwise
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == 0)
		return (0);

	if (get_bit(n, 0) != get_bit(m, 0))
		return (flip_bits(n >> 1, m >> 1) + 1);

	return (flip_bits(n >> 1, m >> 1));
}

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index of bit to return
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	return ((n >> index) & 1);
}
