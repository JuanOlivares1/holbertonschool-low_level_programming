#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount
 * of money.
 * @argc: number of arguments
 * @argv: pointer to an array of pointers (strings of arguments)
 *
 * Return: 0 succes, 1 fail
 */
int main(int argc, char **argv)
{
	int i, cent = atoi(argv[1]), coins = 0, tmp;
	int denom[6] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	} else if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		tmp = 0;
		if (cent > 0)
		{
			if (cent / denom[i] >= 1)
			{
				coins += cent / denom[i];
				tmp = cent / denom[i];
				cent -= tmp * denom[i];
			}
		}
	}
	printf("%i\n", coins);
	return (0);
}
