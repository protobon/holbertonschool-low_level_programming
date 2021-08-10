#include "main.h"
#include <string.h>

/**
  * append_text_to_file - appends text t ofile
  * @filename: file to append text to
  * @text_content: content to append on file
  * Return: 1 if success, -1 if fails
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		len = strlen(text_content);
	w = write(fd, text_content, len);

	close(fd);

	if (w == -1)
		return (-1);

	return (1);
}
