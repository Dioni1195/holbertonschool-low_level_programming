#include <stdio.h>
#include <stdlib.h>

/**
  * main - Calculate the lenght of a string
  * @argc: The count of the arguments
  * @argv: The vector of arguments
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int main(int argc, char *argv[])
{
	int rest;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		rest = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", rest);
		return (0);
	}
}
