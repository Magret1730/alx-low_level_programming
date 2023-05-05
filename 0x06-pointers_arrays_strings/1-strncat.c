#include "main.h"

/**
 * *_strncat - contatenates n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: n number of string
 * Description: The _strncat function is similar to the _strcat function,
 * except that it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dest
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length;

	/**
	 * size = sizeof(dest) / sizeof(dest[0]);
	 */

	while (dest_length != '\0')
	{
		dest_length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		src[i] = dest[dest_length + i];
	}

	dest[dest_length + i] = '\0';

	return (dest);
}
