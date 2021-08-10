#include "main.h"
#include <stdio.h>
#define BUF_SIZE 1024

/**
  * cp_file - copies the content of one file to another
  * @argc: int, argument count
  * @argv: array of arguments
  * Return: always 0
  */
int main(int argc, char **argv)
{
	char *buf[BUF_SIZE];
	int f_from, f_to;
	ssize_t r = 1024, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!argv[1])
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (f_to < 0)
		f_to = open(argv[2], O_TRUNC | O_WRONLY);
	while (r == 1024)
	{
		r = read(f_from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(f_to, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
