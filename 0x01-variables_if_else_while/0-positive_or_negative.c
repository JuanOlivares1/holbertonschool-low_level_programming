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

	/* Statement */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Logic to determinate what the number is, and output */
	if (n < 0)
	{
		printf("%i is negative\n", n);
	} else if (n > 0)
	{
		printf("%i is positive\n", n);
	} else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
