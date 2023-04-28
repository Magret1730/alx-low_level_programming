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
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}

		_putchar('#');

		for (j = 0; j < 2 * i + 1; j++)
		{
			if (i == size - 1 || j == 2 * i - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		if (i != 0 && i != size - 1)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
