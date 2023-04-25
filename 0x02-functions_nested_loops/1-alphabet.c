#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
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
