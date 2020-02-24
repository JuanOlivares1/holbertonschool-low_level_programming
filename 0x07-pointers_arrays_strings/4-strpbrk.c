#include "holberton.h"
/**
 * _strpbrk - searches for any of a set of bytes
 * @s: string to search
 * @accept: substring with the characters to match
 *
 * Return: pointer to the character matched.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p = '\0';

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
