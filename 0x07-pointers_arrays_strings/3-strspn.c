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
	unsigned int i, j, count, fl;

	count = 0;

	for (i = 0; s[i]; ++i)
	{
		fl = 0;
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
			{
				count++;
				fl = 1;
				break;
			}
		}
		if (fl == 0)
			break;
	}
	return (count);
}
