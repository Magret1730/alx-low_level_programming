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
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i + j >= size - 1)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar(' ');
		_putchar('\n');
	}
}
