#include "main.h"

/**
 * *_strcpy - copies string
 * @dest: gets copied string
 * @src: gets the string
 *
 * Description: a function that copies the string pointed
 * to by src, including the terminating null byte, to the
 * buffer pointed to by dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_copy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_copy);
}
