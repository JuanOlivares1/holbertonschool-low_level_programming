#include <stdio.h>
#include <math.h>
/*
 * max_prime - Finds the max prime factor
 * @n: Number to find its prime factor
 *
 * Return: Max prime factor from n
 */
long max_prime(long n)
{
	long prime;
	int i;

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

	return (prime);
}

/*
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
	long n;

	n = 612852475143;

	printf("%li\n", max_prime(n));

	return (0);
}
