#include "holberton.h"

/**
 * _strlen - Calculate the lenght of a string
 * @s: The array to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - Create a new file
 * @filename: The name of the file
 * @text_content: The content of the file
 *
 * Return: Number of printed bytes
 * On error, terun NULL
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t wr = 0;
	size_t txt_len;

	txt_len = _strlen(text_content);
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(fd, text_content, txt_len);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
