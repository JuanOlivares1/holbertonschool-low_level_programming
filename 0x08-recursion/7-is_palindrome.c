#include "holberton.h"

/**
 * _strlen_recursion - prints string's length
 * @s: pointer to a tring
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
        if (s[0] != '\0')
                return (1 + _strlen_recursion(s + 1));
        else
                return (0);
}

int _palindro(char *s, int i, int len)
{
	if (i <= len)
	{
		if (s[i] != s[len])
		{
			return (0);
		} else if (s[i] == s[len])
			return (_palindro(s, i + 1, len - 1));
	}
	return (1);
}

/**
 * is_palindrome - Says if a string is palindrome
 * @s: string
 *
 * Return: 1 if is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (_palindro(s, 0, len - 1));
}
