/**
 * get_bit - Get the value of a bit
 * @n: The number given
 * @index: The index
 *
 * Return: On success The bit value.
 * On error, -1 is returned, and errno is set appropriately.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index <= 64)
		return (bit = (n >> index) & 1);
	else
		return (-1);
}
