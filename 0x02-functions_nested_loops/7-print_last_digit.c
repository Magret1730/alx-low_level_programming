#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints last digit
 * @num: accepts integers
 *
 * Description: function that prints last digit
 * Return: the value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}

	if (num < 0)
	{
		num *= -1;
	}

	last_digit = num % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
