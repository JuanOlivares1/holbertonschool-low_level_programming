#include "holberton.h"
/**
 * rev_string - reverse a string.
 * @s: string to print
 *
 * Returns: void.
 */
void rev_string(char *s)
{
	int i, count;
	char rev[10000];

	for (i = 0; s[i] != '\0'; i++)
		count++;
	count--;

	for (i = 0; i <= count; i++)
	{
		rev[i] = s[count - i];
	}

	for (i = 0; i <= count; i++)
		s[i] = rev[i];
}
