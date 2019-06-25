#include "holberton.h"

/**
  * _isalpha - Entry point
  *@c: pass the parameters to evalued
  *
  * Return: Always 0 (Success)
   */
int _isalpha(int c)
{
	int i, mu;

	mu = 0;

	for (i = 65; i <= 122; i++)
	{
		if (c == i)
		{
			mu = 1;
		}
		if (c == 90)
		{
			i = i + 7;
		}
	}
return (mu);
}
