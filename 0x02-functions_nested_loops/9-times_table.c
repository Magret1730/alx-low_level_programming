#include "main.h"

/**
 * times_table - nine times table
 *
 * Description: function that prints 9 times table
 * starting from 0
 * Return: 0 always success
 */

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;

			if (m > 9)
				if (j < 9)
				{
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}

			else
				if (j < 9)
				{
					_putchar('0' + m);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + m);
				}

		}

		_putchar('\n');
	}
}
