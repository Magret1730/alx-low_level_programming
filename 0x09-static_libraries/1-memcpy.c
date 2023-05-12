#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination source
 * @src: source
 * @n: number of bytes
 *
 * Description: a function that copies n bytes from memory area
 * src to memory area dest and returns pointer to dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *p_dest = dest;
	char *p_src = src;

	for (i = 0; i < n; i++)
	{
		p_dest[i] = p_src[i];
	}

	return (dest);
}
