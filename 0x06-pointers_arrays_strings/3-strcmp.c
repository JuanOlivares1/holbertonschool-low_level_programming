#include "holberton.h"
/**
 * _strcmp - Compares 2 strings
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, rtn;

	rtn = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			rtn = s1[i] - s2[i];
			break;
		}
	}

	return (rtn);
}
