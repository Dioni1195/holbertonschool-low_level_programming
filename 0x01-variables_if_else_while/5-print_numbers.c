#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
   */
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num%10 + '0');
	}
	putchar('\n');
return (0);
}