#include <stdio.h>

/**
 * main - single digit numbers
 *
 * Description: It prints all possible combinations of single
 * digit numbers separated by comma followed by space
 * Note - ascending order, putchar 4 times maximum, no char
 * stdio.h: putchar
 * Return: 0 always success
 */

int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		if (j == 57)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
