#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 * Description: function that prints 10 times the
 * numbers 0 to 14 followed by a new line
 * _putchar can only be used thrice
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10));
			}

			_putchar('0' + (j % 10));
		}

		_putchar('\n');
	}
}
