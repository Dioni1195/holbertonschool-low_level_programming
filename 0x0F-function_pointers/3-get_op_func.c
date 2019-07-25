#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* *get_op_func - Get the fucntion
* @s: The operator
*
* Return: A pointer to a function
* On error, terun NULL
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
	int i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
