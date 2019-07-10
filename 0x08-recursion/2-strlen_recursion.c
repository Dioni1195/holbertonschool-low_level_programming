
/**
 * _strlen_recursion - Calculate the lenght of a string
 * @s: The array to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		++count;
		return (count);
	}
	else
	{
		return (0);
	}
}

