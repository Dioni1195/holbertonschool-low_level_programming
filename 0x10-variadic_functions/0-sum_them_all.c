#include <stdarg.h>

/**
  * sum_them_all - Add the parameters
  * @n: The number of parameters
  *
  * Return: A int
  * On error, return 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list nmb;
	unsigned int sum = 0, i = 0;

	if (n == 0)
		return (0);
	va_start(nmb, n);
	while (i < n)
	{
		sum += va_arg(nmb, int);
		i++;
	}
	va_end(nmb);
	return (sum);
}
