#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: accepts a string
 *
 * Description: function that prints a string, followed by a new line
 * using recursion
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
