#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: receives a string
 * @s2: receives '*'
 *
 * Description: function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0.
 * s2 can contain the special character *. The special char * can
 * replace any string (including an empty string)
 * Return: 1 if the strings can be considered identical otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 != *s2 && *s2 == '*')
	{
		return (0);
	}
	if (*s1 == '\0' && *s2 == '*')
	{
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}

	return (0);

}
