#include <stdio.h>

/**
 * main - combinations of three digits
 *
 * Description: printing all combinations of three
 * digits
 * stdio.h: putchar
 * Return: 0 always success
 */

int main(void)
{
	int i;
	int j;
	int k;
	int count = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = j; k <= 9; k++)
			{
				if (i == j || j == k)
					continue;

				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i < 8 || j < 8 || k < 9)
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

	}
	return (0);
}
