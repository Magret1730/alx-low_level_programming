#include "main.h"

/**
 * puts2 - prints character of string
 * @str: takes a string
 *
 * Description: a function that prints every other character
 * of a string, starting with the first character
 * followed by a new line
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
