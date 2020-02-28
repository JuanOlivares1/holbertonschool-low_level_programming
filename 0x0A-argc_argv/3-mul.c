#include <stdio.h>
#include <stdlib.h>
/**
 * main -
 *
 * Return: always 0. Success
 */
int main(int argc, char **argv)
{
	int x;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", x);
}
