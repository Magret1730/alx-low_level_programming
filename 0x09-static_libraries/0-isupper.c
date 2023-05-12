#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character to print
 *
 * Description: function that checks for uppercase
 * Return: 0 always success
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
