#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @n: number of args.
 * @separator: string with the separator of args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
		return;

	if (separator == NULL)
		separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
