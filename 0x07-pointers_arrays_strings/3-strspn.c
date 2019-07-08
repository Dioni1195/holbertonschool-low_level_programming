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
	int i, j, tam;
	unsigned int count;

	tam = 0;
	while (s[tam] != '\0')
	{
		tam++;
	}
	for (i = 0; i < (tam / 2); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
return (count);
}
