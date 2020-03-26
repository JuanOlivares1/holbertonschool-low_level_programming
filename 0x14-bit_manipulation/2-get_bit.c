#include "holberton.h"

void print_n(unsigned long int n);

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to print
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);

	return ((n >> index) & 1);
}
