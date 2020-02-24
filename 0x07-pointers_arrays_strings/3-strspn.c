#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: substring with the characters to match
 *
 * Return: number of characters matched.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l, count;

	for (i = 0; s[i]; ++i)
		;

	for (j = 0; accept[j]; ++j)
		;

	count = 0;

	for (k = 0; k <= j; ++k)
	{
		for (l = 0; l <= i; ++l)
		{
			if (s[k] == accept[l])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
