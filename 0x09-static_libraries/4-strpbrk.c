#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to string
 * @accept: pointer to another string
 *
 * Description : function that searches a string for any of a set of bytes
 * The _strpbrk() function locates the first occurrence in the string s of
 * any of the bytes in the string accept.Returns a pointer to the byte in
 * s that matches one of the bytes in accept, or NULL if no such byte is found.
 * Return: a pointer to string and NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;
	char *b;

	for (a = s; *a != '\0'; a++)
	{
		for (b = accept; *b != '\0'; b++)
		{
			if (*a == *b)
			{
				return (a);
			}
		}
	}

	return (NULL);
}
