#include "holberton.h"

/**
  * _islower - Entry point
  *@c: pass the parameter to review
  *
  * Return: Always 0 (Success)
   */
int _islower(int c)
{
	int i = 0;
	int min;

	for (min = 97;  min <= 122; min++)
	{
		if (c == min)
		{
			i = 1;
		}
	}
return (i);
}
