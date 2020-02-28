#include <stdio.h>
/**
 * main -
 *
 * Return: always 0. Success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int i;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}
}
