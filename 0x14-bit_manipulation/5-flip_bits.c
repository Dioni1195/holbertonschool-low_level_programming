
/**
 * flip_bits - Number of differents bits between two numbers
 * @n: First number
 * @m: Second number
 *
 * Return: The number of differents bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;
	unsigned long int num;

	num = n ^ m;
	for ( ; num != 0; num >>= 1)
	{
		if (num & 1)
			cont++;
	}
	return (cont);
}
