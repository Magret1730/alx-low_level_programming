#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: is a NULL terminated string to write to the file
 * Description: function that creates a file
 * The created file must have those permissions: rw-------
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate it
 * Return: 1 on success
 *	-1 on failure (file can not be created,
 *	file can not be written, write “fails”, etc…)
 *	if filename is NULL return -1
 *	if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	size_t content_length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content  == NULL)
	{
		close(fd);
		return (1);
	}

	content_length = strlen(text_content);
	w = write(fd, text_content, content_length);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
