
/**
 * set_bit - Set a bit in a selected index
 * @n: The pointer to the number
 * @index: The selected index
 *
 * Return: 1
 * On error, -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index < 64)
	{
		num = 1 << index;
		*n |= num;
		return (1);
	}
	else
		return (-1);
}

