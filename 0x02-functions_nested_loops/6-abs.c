#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 *
 * Description - prints absolute value
 * of an integer
 * Return: success always 0
 */

int _abs(int mag)
{
	if (mag < 0)
	{
		return (mag * (-1));
	}
	return (mag);
}
