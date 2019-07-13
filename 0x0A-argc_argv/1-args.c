#include <stdio.h>

/**
* main - Calculate the lenght of a string
* @argc: The count of the arguments
* @argv: The vector of arguments
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
