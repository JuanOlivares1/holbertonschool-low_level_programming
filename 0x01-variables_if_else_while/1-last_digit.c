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
	int lastDigit;

	/* Statement */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	/* loginc and output */
	if (lastDigit >= 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	} else if (lastDigit == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	} else if (lastDigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
