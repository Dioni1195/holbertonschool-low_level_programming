#include "holberton.h"
#include <stdio.h>

/**
  * print_alphabet -  Entry point
  *
  * Return: Always 0 (Success)
   */
void print_alphabet(void)
{
	int apl;

	for (apl = 'a'; apl <= 'z'; apl++)
	{
		_putchar(apl);
	}
	_putchar('\n');

}
