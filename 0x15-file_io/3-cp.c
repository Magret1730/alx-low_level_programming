#include "main.h"
/**
 * handleError - Prints an error message and exits theprogramwith the errorcode
 * @error_code: The error code to exit with.
 * @message: The error message to print.
 * Return: void
 */
void handleError(int error_code, const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(error_code);
}
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
		handleError(98, "Can't read from source file");
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		close(fd_from);
		handleError(99, "Can't write to destination file");
	}
	while ((n_read = read(fd_from, buf, sizeof(buf))) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written < 0 || n_written != n_read)
		{
			close(fd_from);
			close(fd_to);
			handleError(99, "Can't write to destination file");
		}
	}
	if (n_read < 0)
	{
		close(fd_from);
		close(fd_to);
		handleError(98, "Can't read from source file");
	}
	close_result = close(fd_from);
	if (close_result == -1)
		handleError(100, "Can't close source file descriptor");
	close_result = close(fd_to);
	if (close_result == -1)
		handleError(100, "Can't close destination file descriptor");
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
		handleError(97, "Usage: cp file_from file_to");
	file_from = argv[1];
	file_to = argv[2];
	if (copyFile(file_from, file_to) == -1)
		exit(100);
	return (0);
}
