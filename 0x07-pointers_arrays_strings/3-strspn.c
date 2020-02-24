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
	unsigned int i, j, count;

	count = 0;

	for (i = 0; accept[i]; ++i)
	{
		for (j = 0; s[j]; ++j)
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
		}
	}
	return (count + 1);
}
