#include <stdio.h>
#include <stdlib.h>
/**
* change - Calculate amount of coins
* @n: The number to evaluate
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int change(int n)
{
	if (n == 0)
		return (0);
	if (n % 25 == 0)
		return (change(n - 25) + 1);
	else if (n % 10 == 0)
		return (change(n - 10) + 1);
	else if (n % 5 == 0)
		return (change(n - 5) + 1);
	else if (n % 2 == 0)
		return (change(n - 2) + 1);
	else if (n % 1 == 0)
		return (change(n - 1) + 1);
}

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
	int coins, mod, con1;

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		coins = atoi(*(argv + 1));
		mod = coins % 10;
		if (mod != 0 && mod != 5)
			coins -= mod;
		con1 = change(coins);
		printf("%d\n", con1);
	}
	return (0);
}
