#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 * @n: accepts integer
 *
 * Description - prints absolute value
 * of an integer
 * Return: success always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
