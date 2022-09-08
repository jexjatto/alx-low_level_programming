#include "main.h"
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends a string of text to a file
 * @filename: name of the file
 * @text_content: null terminated string to be appended
 * Return: 1 if success -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_append, file_open, i = 0;

	if (filename == NULL)
		return (-1);
	file_open = open(filename, O_RDWR | O_APPEND);
	if (file_open < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + i))
		i++;
	file_append = write(file_open, text_content, i);
	close(file_open);
	if (file_append < 0)
		return (-1);
	return (1);
}
