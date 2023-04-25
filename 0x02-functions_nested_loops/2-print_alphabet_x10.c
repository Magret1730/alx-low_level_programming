#include "main.h"

/**
 * print_alphabet_x10 - alphabet in lowercase 10 times
 *
 * Description: a function that prints alphabets
 * in lowercase 10 times followed by a new line
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
