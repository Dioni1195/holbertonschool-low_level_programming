#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - main
  * @argc: Count of parameters
  * @argv: Array of parameters
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int main (int argc, char *argv[])
{
	int a = atoi(argv[1]), b = atoi(argv[3]), result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	result = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
