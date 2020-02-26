#include "holberton.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to a tring
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	s++;
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
