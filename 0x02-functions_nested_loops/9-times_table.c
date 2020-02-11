#include "holberton.h"
/**
 * times_table - Displays the times table from 0 to 9.
 *
 * Return: void.
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
