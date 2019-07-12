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

/**
 * _mirror - Calculate the lenght of a string
 * @s: The array to evaluate
 * @n: The length of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _mirror(char *s, int n)
{
	int cont = n - 1;

	if (cont == 0)
	{
		return (1);
	}
	if (*s == s[cont])
	{
		return (_mirror(s + 1, n - 2));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - Fucntion to determine if the string is a palindrome
 * @s: The array to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int tam;

	tam = _strlen_recursion(s);
	if (tam == 0)
	{
		return (1);
	}
	else
	{
		return (_mirror(s, tam));
	}
}
