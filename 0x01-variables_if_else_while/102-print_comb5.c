#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num2, num3, num4;

	for (num = 48; num <= 57; num++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			for (num3 = 48; num3 <= 57; num3++)
			{
				for (num4 = num2 + 1 ; num4 <= 57; num4++)
				{
					putchar (num);
					putchar (num2);
					putchar (' ');
					putchar (num3);
					putchar (num4);
					if (((num == 57) && (num2 == 56)) && ((num3 == 57) && (num4 == 57)))
					{
						break;
					}
					else
					{
						putchar (',');
					}
				}
			}
		}
	}
	putchar ('\n');
return (0);
}
