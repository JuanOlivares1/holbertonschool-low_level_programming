#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num1, num2, tmp;

	num1 = 1;
	num2 = 2;

	printf("%lu", num2);

	while (num2 < 4000000)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp + num1;
		if ((num2 % 2) == 0)
		{
			printf(", ");
			printf("%lu", num2);
		}
	}
	printf("\n");
	return (0);
}
