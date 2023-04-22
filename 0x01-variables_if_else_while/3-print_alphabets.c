#include <stdio.h>

/**
 * main - alphabets
 *
 * Description: prints alphabets in lower case
 * and then upper case
 * followed by a new line
 * stdio.h: putchar
 * Return: 0 meaning success
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
