#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	/* Declaration */
	int n;
	int lastDig;

	/* Statement */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;

	/* loginc and output */
	if (lastDig >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	} else if (lastDig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	} else if (lastDig < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	}
	return (0);
}
