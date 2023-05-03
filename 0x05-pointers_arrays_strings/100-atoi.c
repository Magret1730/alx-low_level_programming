#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: accepts string
 *
 * Description: function that converts a string
 * to an integer
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	/**
	 * skip whitespace
	 */
	while (*s == ' ')
	{
		s++;
	}

	/**
	 * handle sign
	 */
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	/**
	 *  iterate over digits
	 */
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
