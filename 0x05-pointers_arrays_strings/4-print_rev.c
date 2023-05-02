#include "main.h"

/**
 * print_rev - reverses a string
 * @s: accepts string
 *
 * Description: a function that prints a string
 * in reverse, followed by a new line
 * Return: reverse of string
 */

void print_rev(char *s)
{
	int i;
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
