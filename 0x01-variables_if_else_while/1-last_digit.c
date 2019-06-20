#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	str = "Last digit of";

	if (n > 5)
	{
		printf("%s %d is and is greater than 5\n", str, n);
	}
	else if (n == 0)
	{
		printf("%s %d is and is 0\n", str, n);
	}
	else if (n < 6 || n != 0)
	{
		printf("%s %d is and is less than 6 and not 0\n", str, n);
	}

	return (0);
}
