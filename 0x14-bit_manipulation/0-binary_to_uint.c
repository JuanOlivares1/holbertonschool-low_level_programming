#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of binary number
 *
 * Return: converted number or 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint = uint * 2 + b[i] - '0';
	}

	return (uint);
}
