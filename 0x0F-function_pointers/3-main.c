#include "3-calc.h"

/**
 * main - main function program.
 * @ac: number of args
 * @av: pointer to array of args(strings)
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int a, b, result;
	int (*op)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);

	if (((av[2][0] == '/' || av[2][0] == '%') && b == 0)
	    || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(av[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = op(a, b);
	printf("%d\n", result);
	return (0);
}
