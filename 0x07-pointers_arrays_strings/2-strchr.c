/**
  * _strchr - Search for a string
  * @s: The array to be evaluated
  * @c: The character to search
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
   */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
