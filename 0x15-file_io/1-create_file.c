#include "main.h"
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - this creates and writes to a file
 * @filename: name of the file
 * @text_content: content of the text file
 * Return: 1 success -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd_write, fd_open, len = 0;

	if (filename == NULL)
		return (-1);
	fd_open = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd_open < 0)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	fd_write = write(fd_open, text_content, len);
	close(fd_open);
	if (fd_write <= -1)
		return (-1);
	return (1);
}
