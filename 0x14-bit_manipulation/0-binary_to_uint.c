/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * binary_to_uint - Convert a string to number
 * @b: The string to convert
 *
 * Return: On success the integer
 * On error, 0 is returned.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pot = 1;
	int tam, i;

	if (!b)
		return (0);
	tam = _strlen(b);
	for (i = tam - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			num += pot;
		else if (b[i] != '0')
			return (0);
		pot *= 2;
	}
	return (num);
}

