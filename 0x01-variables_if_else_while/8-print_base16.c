#include <stdio.h>

/**
 * main - hexadecimal numbers
 *
 * Description: It prints all hexadecimal numbers
 * in lowercase followed by a new line
 * stdio.h: putchar
 * Return: 0 meaning success
 */

int main(void)
{
	int hexa;

	for (hexa = 0; hexa <= 0xF; hexa++)
	{
		if (hexa < 10)
		{
			putchar(hexa + '0');
		}
		else
		{
			putchar(hexa - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
