#include "variadic_functions.h"

/**
 * sum_them_all - adds all its parameters
 * @n: number of args.
 *
 * Return: sum of all optional args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);
	return (sum);
}
