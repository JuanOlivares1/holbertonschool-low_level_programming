#include "variadic_functions.h"

/**
 * print_all - print any argument
 * @format: list of types of args.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list li;
	char *str;
	int i = 0;

	va_start(li, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(li, int));
			break;
		case 'i':
			printf("%i", va_arg(li, int));
			break;
		case 'f':
			printf("%f", va_arg(li, double));
			break;
		case 's':
			str = va_arg(li, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' ||
					  format[i] == 'i' ||
					  format[i] == 'f' ||
					  format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(li);
}
