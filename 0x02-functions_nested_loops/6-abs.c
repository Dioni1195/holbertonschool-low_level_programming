#include "holberton.h"

/**
  * int _abs(int) - Entry point
  *
  * Return: Always 0 (Success)
  */
int _abs(int n)
{
	int r;

	if (n > 0)
	{
		r = n;
	}
	else if (n == 0)
	{
		r = 0;
	}
	else
	{
		r = 0 -(n);
	}
return (r);
}
