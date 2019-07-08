
/**
  * _memset - Replace n bytes of memory with a constant char
  * @s: The pointer
  * @b: The constant char
  * @n: Number of bytes to replace
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char **p;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	p = &s;
return (*p);
}
