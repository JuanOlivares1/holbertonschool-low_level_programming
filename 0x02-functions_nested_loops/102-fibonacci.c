#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, tmp, count;

	num1 = 1;
	num2 = 2;

	printf("%i", num1);
	printf(", ");
	printf("%i", num2);

	while(count <= 50)
	{
		if (count <= 50)
                        printf(", ");
		tmp = num1;
		num1 = num2;
		num2 = tmp + num1;
		count++;
		printf("%i", num2);
	}
	printf("\n");
	return (0);
}
