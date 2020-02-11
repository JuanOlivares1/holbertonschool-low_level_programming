#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num1, num2, tmp, sum;

	num1 = 1;
	num2 = 2;
	sum = num2;

	while (num2 < 4000000)
	{
		tmp = num1;
		num1 = num2;
		num2 = tmp + num1;
		if ((num2 % 2) == 0)
		{
			sum += num2;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
