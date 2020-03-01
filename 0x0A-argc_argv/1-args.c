#include <stdio.h>
#include "holberton.h"
/**
 * main - prints
 * @argc: number of arguments
 * @argv: pointer to an array of pointers (strings of arguments)
 *
 * Return: 0 succes, 1 fail
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%i\n", argc - 1);
}
