#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file to append
 * @text_content:  is the NULL terminated string to add at the end of the file
 * Description: function that appends text at the end of a file
 * Do not create the file if it does not exist
 * Return: 1 on success and -1 on failure
 *	If filename is NULL return -1
 *	If text_content is NULL, do not add anything to the file
 *	Return 1 if the file exists and -1 if the file does not exist
 *	or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t append_length;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd < 0)
	{
		if (errno == EACCES)
			return (-1);
		else
			return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	append_length = strlen(text_content);
	w = write(fd, text_content, append_length);
	if (w == 1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
