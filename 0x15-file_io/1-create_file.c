#include "main.h"
#include <string.h>

/**
  * create_file - creates a new file
  * @filename: new file name
  * @text_content: content to write on new file
  * Return: 1 if success, -1 if fails
  */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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
