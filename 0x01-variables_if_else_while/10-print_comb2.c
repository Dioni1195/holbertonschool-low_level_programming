#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
   */
int main(void)
{
	int num, num2;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num);
			putchar(num2);

			if ((num == 57) && (num2 == 57))
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}

