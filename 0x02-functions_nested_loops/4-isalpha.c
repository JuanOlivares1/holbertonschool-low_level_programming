#include "holberton.h"
/**
 * _isalpha - tells if the argument is a letter (lowercase or uppercase).
 * @c: the character to test.
 *
 * Return: 1 if is a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
