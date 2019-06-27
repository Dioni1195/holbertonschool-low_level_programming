#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, p, s, a;

	p = 1;
	s = 1;
	printf("%d, %d, ", p, s);
	for (i = 1; i <= 48; i++)
	{
		a = p + s;
		printf("%d, ", a);
		p = s;
		s = a;
	}
	putchar('\n');
return (0);
}
