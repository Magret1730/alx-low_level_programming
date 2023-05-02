#include "main.h"

/**
 * add - adds two integers
 * @i: gets an integer
 * @j: gets an integer
 *
 * Description: a function that adds two
 * integers and returns the result
 * Return: integers
 */

int add(int i, int j)
{
	int i;
	int j;
	int n;

	if (i >= 0 || i < 0)
	{
		if (j >= 0 || j < 0)
		{
			n = i + j;
			_putchar(n + '0');
		}
	}

	return (n);
}
