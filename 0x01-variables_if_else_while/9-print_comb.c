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


	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i <= 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
