#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	/* Declarations */
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (!(i == 57 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
