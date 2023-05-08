#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates character in string
 * @s: receives a string
 * @c: receives a character for comparison
 *
 * Description: a function that locates a string
 * returns a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found.
 * Return: string,s.
 */

char *_strchr(char *s, char c)
{
	/**
	 * int i;

	for (i = 0; i != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}

	return (NULL);
	*/

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
