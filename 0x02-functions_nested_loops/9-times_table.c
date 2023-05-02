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

			if (m == 0)
			{
				_putchar('0' + m);
			}

			/**
			 * if (m == 0 && (j > 1 || j <= 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m == 0 && j == 0)
			{
				_putchar('0' + m);
			}
			*/
			
			
			if (m <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
			/**
			 * if (m == 0 && (j > 1 || j <= 9))
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m == 0 && j == 0)
			{
				_putchar('0' + m);
			}
			*/
		}

		_putchar('\n');
	}
}
