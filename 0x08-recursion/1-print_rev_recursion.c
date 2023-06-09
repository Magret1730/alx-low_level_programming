#include "main.h"

/**
 * _print_rev_recursion - reverses a string
 * @s: receives a string
 *
 * Description: function that prints a string in reverse
 * using recursion.
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
