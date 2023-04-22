#include <stdio.h>

/**
 * main - Reverse lowercase alphabets
 *
 * Description: It prints lowercase alphabets in reverse
 * followed by a new line
 * Note - only putchar, putchar twice
 * stdio.h: putchar
 * Return: 0 meaning sucess
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');

	return (0);
}
