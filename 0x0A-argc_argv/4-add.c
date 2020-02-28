#include <stdio.h>
#include <stdlib.h>
/**
 * main -
 *
 * Return: always 0. Success
 */
int main(int argc, char **argv)
{
	int i, av, x = 0;

	if (argc <= 1)
	{
		printf("%i\n", x);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		av = atoi(argv[i]);

		if (*argv[i] < '0' || *argv[i] > '9')
		{
			printf("Error\n");
			return (1);
		} else if (av >= 0)
			x += av;
	}

	printf("%i\n", x);
	return (0);
}
