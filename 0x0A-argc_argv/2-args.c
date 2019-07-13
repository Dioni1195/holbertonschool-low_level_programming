#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
