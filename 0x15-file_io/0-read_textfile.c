#include "holberton.h"


/**
  * read_textfile - Open, read and print the contents of a file to stdoutp
  * @filename: The name of the file
  * @letters: The number of letters to print
  *
  * Return: Number of printed bytes
  * On error, terun NULL
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num;
	int fl, rd;
	char *buf;

	if (!filename)
		return (0);
	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	rd = read(fl, buf, letters);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	num = write(STDOUT_FILENO, buf, rd);
	if (num == -1 || num != rd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fl);
	return (rd);
}
