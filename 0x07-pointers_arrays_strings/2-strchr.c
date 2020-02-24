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
	int i;
	char *p = '\0';

	i = 0;

	do {
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	} while (s[i] != '\0');

	return (p);
}
