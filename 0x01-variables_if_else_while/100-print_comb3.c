#include <stdio.h>

/**
 * main - combinations of two digits
 *
 * Description: All combinations of two digits
 * stdio.h: putchar
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i + 1; j <= 9; j++)
	{
		if (i == j)
			continue;
		putchar(i + '0');
		putchar(j + '0');
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
