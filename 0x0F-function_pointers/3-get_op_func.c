#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - adds two numbers
 * @s: string to compare
 *
 * Return: result of operation.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < (int)sizeof(ops))
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
