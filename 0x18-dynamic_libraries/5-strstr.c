#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: receives a string
 * @needle: receives a string
 *
 * Description: function that locates a substring.
 * The _strstr() function finds the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes (\0) are not
 * compared.Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * Return: NULL and haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	for (a = haystack; *a != '\0'; a++)
	{
		for (b = needle; *b != '\0'; b++)
		{
			if (*a == *b)
			{
				break;
			}
			a++;
		}
		if (*b == '\0')
		{
			return (haystack);
		}
	}

	return (NULL);
}
