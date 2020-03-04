#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - split a string into words
 * @str: pointer to a tring
 *
 * Return: pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i, j, w = 0, f = 0, count_words = 0, count_chars = 0;
	char **p;

	if (str == NULL)
		return (NULL);
	for (i = 1; str[i]; i++)
	{
		if (str[i] != ' ' && str[i + 1] == ' ')
			count_words++;
	}
	p = malloc(sizeof(char *) * count_words + 1);
	for (i = 0; i < count_words ; i++)
	{
		count_chars = 1;
		f = 0;
		for (j = w; str[j]; j++)
		{
			if (str[j] == ' ' && f == 0)
				continue;
			else if (str[i] == ' ' && f == 1)
				break;
			if (str[j] != ' ')
			{
				count_chars++;
				w = j;
				f = 1;
			}
		}
		if (f == 1)
		{
			p[i] = malloc(sizeof(char) * count_chars);
			if (p[i] == NULL)
			{
				free(p[i]);
				return (NULL);
			}
		}
	}
	return (p);
}
