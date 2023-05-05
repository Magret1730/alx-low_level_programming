#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: accepts first string
 * @s2: accepts another string
 *
 * Description: a function that compares two strings
 * Your function should work exactly like strcmp
 * Return: returns signs and zeros
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}

		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
