#include "main.h"
#include <stdio.h>

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
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && i < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
