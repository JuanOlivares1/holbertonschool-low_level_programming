#include "holberton.h"
/**
 * _strpbrk - searches for any of a set of bytes
 * @haystack: string to compare
 * @needle: substring with the characters to match
 *
 * Return: pointer to the character matched.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, f;
	char *p = '\0';

	for (i = 0; haystack[i]; ++i)
	{
		f = 0;
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j]; ++j)
			{
				if (haystack[k] != needle[j])
				{
					f = 1;
					break;
				}
				k++;
			}
			if (f == 0)
			{
				p = &haystack[i];
				break;
			}
		}
	}
	return (p);
}
