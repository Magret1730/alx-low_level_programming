#include "main.h"
#include <stddef.h>

/**
 * puts_half - half of string
 * @str: accepts string
 *
 * Description: a function that prints the second half of a
 * string followed by a new line
 * Return: string
 */

void puts_half(char *str)
{
	size_t i;
	size_t n;
	size_t length_of_string;

	length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
		length_of_string++;
	}

	if (str[length_of_string] % 2 == 0)
	{
		n = length_of_string / 2;
		for (i = n; i < length_of_string; i++)
		{
			_putchar(str[i]);
		}
	}

	else if (str[length_of_string] % 2 == 1)
	{
		n = (length_of_string - 1) / 2;
		for (i = n + 1; i < length_of_string; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
