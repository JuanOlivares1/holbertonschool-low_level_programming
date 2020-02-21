#include "holberton.h"
/**
 * cap_string - cpializes all words
 * @s: sring to capitalize
 *
 * Return: char *;
 */
char *cap_string(char *s)
{
	int j, i;
	char  chars[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			 ')', '{', '}'};


	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; i < 13; i++)
		{
			if ((s[j] < 'a' || s[j] > 'z')
			    && (s[j + 1] >= 'a' && s[j + 1] <= 'z'))
			{
				if (s[j] == chars[i])
					s[j + 1] -= 32;

			} else if (j == 0 && (s[j] >= 'a' && s[j] <= 'z'))
			{
				s[j] -= 32;
			}
		}
	}
	return (s);
}
