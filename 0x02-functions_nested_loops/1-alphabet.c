#include "holberton.h"
/**
 * print_alphabet - prints a lowercase alphabet
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
