#include "holberton.h"
/**
 * rot13 - encodes on rot13
 * @s: string to encode
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char r13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char val[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == r13[j])
			{
				s[i] = val[j];
				break;
			}
		}
	}
	return (s);
}
