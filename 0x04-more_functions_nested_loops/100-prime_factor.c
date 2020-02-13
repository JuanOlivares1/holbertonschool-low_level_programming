#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long n, prime;
	int i;

	n = 612852475143;

	while (n % 2 == 0)
	{
		prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			prime = i;
			n /= i;
		}
	}
	if (n > 2)
		prime = n;

	printf("%lu\n", prime);

	return (0);
}
