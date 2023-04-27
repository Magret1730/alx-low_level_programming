#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Description: function that prints numbers
 * 0 to 9 followed by a new line
 * Return: print_numbers
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
