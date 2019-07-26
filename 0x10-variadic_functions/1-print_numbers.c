#include <stdio.h>
#include <stdarg.h>

/**
  * print_numbers - Print passed numbers
  * @separator: The format to print numbers with
  * @n: The numbers of parameters
  *
  * Return: A pointer to a function
  * On error, terun NULL
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nmb;
	unsigned int i = 0;

	va_start(nmb, n);
	while (i < n)
	{
		if (separator == NULL || i == (n - 1))
			printf("%d", va_arg(nmb, int));
		else if (i != (n - 1))
			printf("%d%s", va_arg(nmb, int), separator);
		i++;
	}
	printf("\n");
	va_end(nmb);
}
