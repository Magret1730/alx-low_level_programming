#include "main.h"
/**
 * print_square - prints square
 * @size: takes in a value
 *
 * Description: function that prints a square
 * followed by a new line
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');

		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
