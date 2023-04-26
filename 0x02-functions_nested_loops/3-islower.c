#include "main.h"

/**
 * _islower - checks for lowercase
 *@c: The character to print
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
