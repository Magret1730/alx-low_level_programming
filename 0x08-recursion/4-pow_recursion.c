#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: receives integer
 * @y: receives integer
 *
 * Description:  function that returns the value of x raised to the
 * power of y. If y is lower than 0, the function should return -1
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
