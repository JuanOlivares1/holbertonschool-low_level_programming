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
	int count;

	num1 = 1;
	num2 = 2;
	count = 2;

	printf("%lu", num1);
	printf(", ");
	printf("%lu", num2);

	while (count < 50)
	{
		if (count < 50)
			printf(", ");
		tmp = num1;
		num1 = num2;
		num2 = tmp + num1;
		count++;
		printf("%lu", num2);
	}
	printf("\n");
	return (0);
}
