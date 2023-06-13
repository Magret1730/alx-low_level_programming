#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: count of arguments
 * @argv: files to be copied from and to
 *
 * Description: program that copies the content of a file to another file
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to, *buf;
	ssize_t n_read, n_written;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}

	buf = malloc(1024);
	if (buf == NULL)
	{
		dprintf(2, "Error: Memory allocation failed\n");
		close(fd_from);
		close(fd_to);
		return (99);
	}

	while ((n_read = read(fd_from, buf, 1024)) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			free(buf);
			return (99);
		}
	}

	if (n_read < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		free(buf);
		return (98);
	}

	if (close(fd_from) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		free(buf);
		return (100);
	}

	if (close(fd_to) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		free(buf);
		return (100);
	}

	free(buf);
	return (0);
}
