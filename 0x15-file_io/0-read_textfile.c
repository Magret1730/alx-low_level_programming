#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIXstandardoutput
 * @filename: name of file
 * @letters: number of letters it should read and print
 *
 * Description: function that reads a text file and prints it to the
 * POSIX standard output.
 * Return: actual number of letters it could read and print
 *	if the file can not be opened or read, return 0
 *	if filename is NULL return 0
 *	if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t r, w;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (w);
}
