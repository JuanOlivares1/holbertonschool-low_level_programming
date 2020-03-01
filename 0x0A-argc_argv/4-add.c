#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints
 * @argc: number of arguments
 * @argv: pointer to an array of pointers (strings of arguments)
 *
 * Return: 0 success, 1 fail
 */
int main(int argc, char **argv)
{
	int i, j, x = 0;

	if (argc <= 1)
	{
		printf("%i\n", x);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] <= '0' || argv[i][j] >= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		x += atoi(argv[i]);
	}

	printf("%i\n", x);
	return (0);
}
