#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints
 * @argc: number of arguments
 * @argv: pointer to an array of pointers (strings of arguments)
 *
 * Return: 0 succes, 1 fail
 */
int main(int argc, char **argv)
{
	int x;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", x);
	return (0);
}
