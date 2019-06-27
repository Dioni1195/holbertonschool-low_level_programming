#include "holberton.h"
#include <stdio.h>

/**
  * main  - writes the character c to stdout
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else
			{
				printf("Fizz ");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d", i);
			putchar(32);
		}
	}
	putchar('\n');
return (0);
}
