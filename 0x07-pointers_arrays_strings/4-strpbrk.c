/**
  * _strpbrk - Search in a string for the first char based in another string
  * @s: The array to be evaluated
  * @accept: The array with the characters to search
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	p = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
return (p);
}
