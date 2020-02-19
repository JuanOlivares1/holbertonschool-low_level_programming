#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - reverse a string.
 * @s: string to print
 *
 * Returns: void.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; ++i);

	j = i - 1;

	for (i = 0; i <= j; i++)
	{
		tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
		j--;
	}
}
