#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - Entry point
*@n: pass the parameter to review
*
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
		putchar ('\n');
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(", ");
			}
		}
		putchar ('\n');
	}
	else
	{
		printf("98\n");
	}
}
