#include "holberton.h"

/**
 * _strlen - Calculate the lenght of a string
 * @s: The array to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * append_text_to_file - Append content to a file
 * @filename: The name of the file
 * @text_content: The content of the file
 *
 * Return: Number of printed bytes
 * On error, terun NULL
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (0);
	if (text_content != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		wr = write(fd, text_content, _strlen(text_content));
		if (wr == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_WRONLY);
		if (fd == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

