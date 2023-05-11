#include "main.h"

/**
 * length - length of a string
 * @s: string to calculate its length
 *
 * Description: funtion that calculates the length
 * of a string.
 * Return: length of string
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length(s + 1));
	}
}

/**
 * check - checks if a string is palindrome
 * @s: string to check
 * @i: start point
 * @j: end point
 *
 * Description: a funtion that checks if a string is
 * palindrome.
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int i, int j)
{
	if (i >= j)
	{
		return (1);
	}
	else if (s[i] != s[j])
	{
		return (0);
	}
	else
	{
		return (check(s, i + 1, j - 1));
	}
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Description: function that checks if a string is
 * palindrome
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (check(s, 0, length(s) - 1));
}
