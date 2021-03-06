#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings
 * @separator: The format to separate the strings
 * @n: The numbers of parameters
 *
 * Return: Nothing
 * On error, nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i = 0;
	char *p;

	va_start(str, n);
	while (i < n)
	{
		p = va_arg(str, char *);
		if (p != NULL)
			printf("%s", p);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(str);
}

