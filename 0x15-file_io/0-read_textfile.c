#include "main.h"
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - this reads a textfile and prints to stdout
 * @filename: name of the file
 * @letters: number of letters printed
 * Return: numberof letters read, 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ofile, rfile, wfile;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	ofile = open(filename, O_RDONLY);
	if (ofile == -1)
	{
		free(temp);
		return (0);
	}
	rfile = read(ofile, temp, letters);
	if (rfile < 0)
	{
		free(temp);
		return (0);
	}
	wfile = write(STDOUT_FILENO, temp, rfile);
	free(temp);
	close(ofile);
	if (wfile < 0)
		return (0);
	return ((ssize_t)wfile);
}
