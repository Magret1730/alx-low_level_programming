#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes a value
 *
 * Description: a function that prints a triangle
 * followed by a new line.
 * Return: 0 always success
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size + 1; i++)
	{
		if (i == size + 1)
		{
			break;
		}
		for (j = 1; j <= size - i + 1; j++)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
