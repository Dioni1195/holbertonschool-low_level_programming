/**
* _strlen - writes the character c to stdout
* @s: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
return (i);
}
/**
  * _strncpy - Copy a string
  * @dest: The array to destination
  * @src: The array to be copied
  * @n: Number of characters to be copied
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
return (dest);
}
/**
  * _strcmp - writes the character c to stdout
  * @s1: The first character to compare
  * @s2: The second character to compare
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	res = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
		res = s1[i] - s2[i];
		break;
		}
	}
return (res);
}
/**
  * _strstr - Search a substring in a string
  * @haystack: The array to compare
  * @needle: The array that have the substring
  *
  * Return: On success 1.
  * On error, -1 is returned, and errno is set appropriately.
  */
char *_strstr(char *haystack, char *needle)
{
	int haysLeng, needLeng, i, j;
	char buff[1024];

	haysLeng = _strlen(haystack);
	needLeng = _strlen(needle);
	i = 0;
	while (i <= (haysLeng - needLeng))
	{
		_strncpy(buff, haystack + i, needLeng);
		buff[needLeng] = '\0';
		j = _strcmp(buff, needle);
		if (j == 0)
		{
			return (haystack + i);
		}
		i++;
	}
return (0);
}
