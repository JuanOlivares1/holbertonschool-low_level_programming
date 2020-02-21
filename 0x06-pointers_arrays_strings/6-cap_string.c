#include "holberton.h"
/**
 * cap_string - cpializes all words
 * @s: sring to capitalize
 *
 * Return: char *;
 */
char *cap_string(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if ((s[j] < 'a' || s[j] > 'z')
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
		} else if (j == 0 && (s[j] >= 'a' && s[j] <= 'z'))
		{
			s[j] -= 32;
		}
	}
	return (s);
}
