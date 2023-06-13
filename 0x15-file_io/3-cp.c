#include "main.h"
/**
 * openFiles - Opens the source and destination files.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 * Description: This function opens the source file and destination files
 * Return: The file descriptors for the source and destination files.
 */
int openFiles(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;

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
	return (fd_from, fd_to);
}
/**
 * performCopy - Performs the file copy operation.
 * @fd_from: File descriptor of the source file.
 * @fd_to: File descriptor of the destination file.
 * Description: Performs the file copy operation
 * Return: void
 */
void performCopy(int fd_from, int fd_to)
{
	char buf[1024];
	ssize_t n_read, n_written;
	int close_result;

	while ((n_read = read(fd_from, buf, sizeof(buf))) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written < 0 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to destination file\n");
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (n_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
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
}
/**
 * main - Program entry point.
 * @argc: Count of arguments.
 * @argv: Files to be copied from and to.
 * Description: main function
 * Return: 0 on success, 97-100 on failure.
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fd_from, fd_to = openFiles(file_from, file_to);
	performCopy(fd_from, fd_to);

	return (0);
}
