#include "main.h"

/**
 * _puts - prints out a string
 * @s: accepts strings
 *
 * Description: a function that prints
 * out a string, followed by a new line.
 * Return: string
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
