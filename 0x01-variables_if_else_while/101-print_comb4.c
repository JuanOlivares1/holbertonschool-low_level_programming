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
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = i; j <= 57; j++)
		{
			if (i != j)
			{
				for (k = j; k <= 57; k++)
				{
					if (j != k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (!(i == 55 && j == 56 && k == 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
