#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
* print_all - Print all
* @format: The format
*
* Return: Nothing
* On error, terun NULL
*/
void print_all(const char * const format, ...)
{
	va_list prnt;
	char *cmp;
	int i = 0;

	while (format == NULL)
	{
		printf("\n");
		return;
	}
	va_start(prnt, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(prnt, int));
				break;
			case 'i':
				printf("%d", va_arg(prnt, int));
				break;
			case 'f':
				printf("%f", va_arg(prnt, double));
				break;
			case 's':
				cmp = va_arg(prnt, char *);
				if (cmp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", cmp);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		|| format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
	i++;
	}
	printf("\n"), va_end(prnt);
}
