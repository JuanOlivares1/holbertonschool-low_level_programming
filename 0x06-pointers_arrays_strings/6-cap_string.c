#include "holberton.h"
/**
 * cap_string - cpializes all words
 * @s: sring to capitalize
 *
 * Return: char *;
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
		;

	for (j = 0; j <= i; j++)
	{
		if ((s[j] <= 'a' || s[j] >= 'z')
		    && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
		{
			if (s[j] == ' ' || s[j] == '\t'
			    || s[j] == '\n'
			    || s[j] == ','
			    || s[j] == ';'
			    || s[j] == '.'
			    || s[j] == '!'
			    || s[j] == '?'
			    || s[j] == '"'
			    || s[j] == '('
			    || s[j] == ')'
			    || s[j] == '{'
			    || s[j] == '}')
			{
				s[j + 1] -= 32;
			}
		}
	}
	return (s);
}
