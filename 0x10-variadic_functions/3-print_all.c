#include "variadic_functions.h"

/**
 * print_all - print any argument
 * @format: list of types of args.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *str;

	if (format == NULL)
		return;

        

	while ()
	{
		str = va_arg(list, char *);
        }
	printf("\n");
	va_end(list);
}
