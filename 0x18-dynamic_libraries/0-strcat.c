#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: accepts one string
 * @src: accepts another string
 *
 * Description: a function that concatenates two strings
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the
 * end of dest, and then adds a terminating null byte
 * returns a pointer to the resulting string dest
 * Return: charater
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
