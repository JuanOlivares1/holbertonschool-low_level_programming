#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - coverts a string into a int.
 * @s: string to convert
 *
 * Return: int.
 */
int _atoi(char *s)
{
	int i, len, fnp, lnp, num;

	for (i = 0; s[i] != '\0'; i++)/*in the end of loop i = string length*/
		;

	len = i;
	fnp = -1;
	lnp = -1;

	for (i = 0; i <= len; i++) /*catching the first and last position of number*/
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			lnp = i;
			if (fnp == -1)
				fnp = i;
		} if ((s[i] < '0' && s[i] > '9') && lnp != -1)
			  break;
	}

	if (fnp == -1)/*if the string doesn't have a number return '0'*/
		return (0);

	for (i = fnp; i <= lnp; i++) /*converts string to number*/
	{
		num = num * 10 + s[i] - '0';
	}

	if (s[fnp - 1] == '-')/*knowing if the number will be positive or negative*/
		num *= -1;
	else if (s[fnp - 1] == '+')
		num *= 1;

	return (num);
}
