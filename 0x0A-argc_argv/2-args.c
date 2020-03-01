#include "holberton.h"
#include <stdio.h>
/**
 * main - prints
 * @argc: number of arguments
 * @argv: pointer to an array of pointers (strings of arguments)
 *
 * Return: 0 succes, 1 fail
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
}
