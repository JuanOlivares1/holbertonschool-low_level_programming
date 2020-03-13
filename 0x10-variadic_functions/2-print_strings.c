#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @n: number of args.
 * @sepaator: string with the separator of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;


	if (n == 0)
		return;

	if (separator == NULL)
                separator = "";

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			printf("%s", separator);
        }
	printf("\n");
	va_end(list);
}
