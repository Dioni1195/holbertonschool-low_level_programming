#include "holberton.h"
#include <stdio.h>

/**
  * args_dif- Print an error
  *
 * Return: Nothing
*/

void args_dif(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error98 - Print error 98
 *@s: The name of the file
 *
 * Return: Nothing
*/
void error98(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * error99 - Print error 99
 *@s: The name of the file
 *
 * Return: Nothing
*/
void error99(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * error100 - Print error 100
 *@a: The fd of the file
 *
 * Return: Nothing
*/
void error100(int a)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", a);
	exit(100);
}

/**
 * main - Entry point
 *@argc: Count of parameters
 *@argv: The parameters
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
	char s[1024], *file_from, *file_to;
	int fd1, fd2, rd, num, cl1, cl2;

	file_from = argv[1];
	file_to = argv[2];
	if (argc != 3)
		args_dif();
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		error98(file_from);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		error99(file_to);
	rd = read(fd1, s, 1024);
	if (rd == -1)
		error98(file_from);
	num = write(fd2, s, rd);
	if (num == -1)
		error99(file_to);
	while (rd == 1024)
	{
		rd = read(fd1, s, 1024);
		if (rd == -1)
			error98(file_from);
		num = write(fd2, s, rd);
		if (num == -1)
			error99(file_to);
	}
	cl1 = close(fd1);
	if (cl1 == -1)
		error100(fd1);
	cl2 = close(fd2);
	if (cl2 == -1)
		error100(fd2);
	return (0);
}
