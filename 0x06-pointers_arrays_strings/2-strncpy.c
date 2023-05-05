#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: receives a string
 *
 * Description: a function that copies a string
 * Your function should work exactly like strncpy
 * Return: pointer to character type destination source
 */

char *_strncpy(char *dest, char *src, int n)
{
	/**
	 * int dest_length;
	int src_length;

	src_length = 0;
	dest_length = 0;

	while (src[src_length] != '\0')
	{
		src_length++;
	}

	dest_length = src_length + 1;
	*/

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
