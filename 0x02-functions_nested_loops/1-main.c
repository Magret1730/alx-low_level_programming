#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, the errno is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}

#include <unistd.h>
#include "main.h"

/**
 * void - it returns nothing
 *
 * Description: it prints out the alphabets in lowercase
 * unistd.h: declares miscallanous functions
 * main.h: prints using _putchar function
 * Return: print_alphabet
 */

void print_alphabet(void)
{
	char print_alphabet;
	for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
	{
		_putchar(print_alphabet);
	}
}
