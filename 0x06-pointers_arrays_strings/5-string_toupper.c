#include "holberton.h"
/**
 * string_toupper - changes lowercase to uppercase on strings
 * @s: string to convert
 *
 * Return: char.
 */
char *string_toupper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j <= i; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 32;
	}

	return (s);
}
