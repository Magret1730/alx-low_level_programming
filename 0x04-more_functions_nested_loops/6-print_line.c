#include "main.h"

/**
 * print_line - straight line
 * @n: prints _
 *
 * Description: function that draws a straight line
 * on the terminal followed by a new line
 * Return: n
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
