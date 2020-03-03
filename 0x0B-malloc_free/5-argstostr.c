#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * args_len - returns the length of a string
 * @s: string
 *
 * Return: length of arg
 */
int args_len(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;

	return (i);
}

/**
 * argstostr - free a matrix allocated space on memory
 * @ac: args count
 * @av: args vector
 *
 * Return: pointer to string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, chars;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; av[i]; i++)
	{
		chars += args_len(av[i]);
	}

	p = malloc(sizeof(chars) * (chars + ac));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}

	return (p);
}
