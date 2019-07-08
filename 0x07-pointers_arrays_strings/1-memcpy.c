/**
  * _memcpy - Change a character from an array
  * @dest: The destination pointer
  * @src: The source pointer
  * @n: Number of bytes of memory to be copied
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
