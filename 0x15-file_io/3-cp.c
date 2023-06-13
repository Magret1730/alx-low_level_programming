#include "main.h"
/**
 * copyFile - function that copies the content of a file to another file
 * @file_from: source file name
 * @file_to: destination file name
 * Description: Copies the content of the source file to the destination file.
 * Return: 0 on success, -1 on failure
 */
int copyFile(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, close_result;
	char buf[1024];
	ssize_t n_read, n_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}
	while ((n_read = read(fd_from, buf, sizeof(buf))) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written < 0 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (n_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	close_result = close(fd_from);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_result = close(fd_to);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
/**
 * main - program entry point
 * @argc: count of arguments
 * @argv: files to be copied from and to
 * Description: Program that copies the content of a file to another file.
 * Return: 0 on success, 97-100 on failure
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (copyFile(file_from, file_to) == -1)
		exit(100);
	return (0);
}
