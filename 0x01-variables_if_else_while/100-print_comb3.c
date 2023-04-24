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
	int count;

	count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			if (i == j)
				continue;
			if (i > j)
			{
				int k = i;

				i = j;
				j = k;
			}

			putchar(i + '0');
			putchar(j + '0');

			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}

			count++;
		}
	}

	if (count > 0)
	{
		putchar('\n');
	}

	return (0);
}
