
/**
 * clear_bit - Clear a selected bit
 * @n: Pointer to number
 * @index: The index
 *
 * Return: The sum of the data
 * On error, nothing
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index < 64)
	{
		num = ~(1 << index);
		*n &= num;
		return (1);
	}
	else
		return (-1);
}
