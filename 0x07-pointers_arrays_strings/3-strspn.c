/**
  * _strspn - Counter the numbers of bytes
  * @s: The array to be evaluated
  * @accept: The characters to search
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				++count;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
	}
return (0);
}
