#include "holberton.h"
/**
 * jack_bauer - show all minutes a day
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i <= 50 ; i++)
	{
	       	for (j = 48; j <= 57; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
