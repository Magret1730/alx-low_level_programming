#include "main.h"

/**
 * print_sign - sign of number
 * @n: accepts sign
 *
 * Description: function to print sign of
 * a number
 * Return: 0 always success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
