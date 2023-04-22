#include <stdio.h>

/**
 * main - single digit numbers
 *
 * Description: It prints single digit numbers
 * of base 10 starting from 0,
 * followed by a new line
 * note - no char, only putchar, putchar twice
 * stdio: putchar
 * Return: 0 meaning sucess
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}
