#include "main.h"

/**
 * islower - checks for lowercase
 *
 * Description: a function to check for lower case
 * Return: Always return void
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
