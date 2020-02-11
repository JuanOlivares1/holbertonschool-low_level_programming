#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			sum += i;
		else if ((i % 5) == 0)
			sum += i;
	}
	printf("%i", sum);
	putchar('\n');
	return (0);
}
