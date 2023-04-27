#include "main.h"

/**
 * print_most_numbers - prints numbers 0 - 9
 *
 * Description - a function prints numbers 0 - 9
 * followed by a new line but do not print
 * 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}

		_putchar(i);
	}

	_putchar('\n');
}
