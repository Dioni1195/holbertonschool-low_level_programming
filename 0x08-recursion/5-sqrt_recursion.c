/**
* _root - Calculate the square root
* @n: The number to be calculate
* @a: The increment
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _root(int n, int a)
{
	if ((a * a) == n)
		return (a);
	if ((a * a) > n)
		return (-1);
	else
		return (_root(n, a + 1));
}
/**
* _sqrt_recursion - Make the power of an integer
* @n: The int to elevate
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (_root(n, 1));
}
