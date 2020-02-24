#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to look for
 *
 * Return: pointer to string.
 */
char *_strchr(char *s, char c)
{
	int i, j;
	char *p = '\0';

	for (j = 0; s[j]; ++j)
		;

	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	return (p);
}
