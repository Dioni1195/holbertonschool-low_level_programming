
/**
 * _pow_recursion - Make the power of an integer
 * @x: The int to elevate
 * @y: The power
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	int pot;

	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		pot = x * _pow_recursion(x, --y);
		return (pot);
	}
	else
	{
		return (1);
	}
}
