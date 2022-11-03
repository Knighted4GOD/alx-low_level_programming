#include "main.h"
#include <stdlib.h>

/**
 * read_texfile - Reads a text file and prints it to POSIX stdout
 * @filename: a pointer to the name of the file
 * @letters: the number of letter the
 * function should read and print
 *
 * Return: if function fails or filename is NULL -0
 * o/w - the actual num of bytes the function can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
