#include "main.h"

/**
  * read_textfile - reads a file and prints it to stdout
  * @filename: file to read
  * @letters: number of letters
  * Return: write, 0 if fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if ((o == -1) | (r == -1) | (w != r) | (w == -1))
	{
		return (0);
		free(buffer);
	}
	free(buffer);
	close(o);
	return (w);
}
