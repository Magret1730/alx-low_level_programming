#include "main.h"

/**
 * _puts - prints out a string
 * @str: accepts strings
 *
 * Description: a function that prints
 * out a string, followed by a new line.
 * Return: string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
