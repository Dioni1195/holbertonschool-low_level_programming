/**
* _prime - Evaluate the number
* @n: The number
* @a: First number to iterate
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _prime(int n, int a)
{
	if (n == a)
		return (1);
	if (n % a == 0)
		return (0);
	else
		return (_prime(n, a + 1));

}

/**
* is_prime_number - Check if a number is prime
* @n: Number to evaluate
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (_prime(n, 2));
}
