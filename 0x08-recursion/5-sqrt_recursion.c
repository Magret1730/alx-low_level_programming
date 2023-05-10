#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: receives an integer
 *
 * Description - function that returns the natural square root of
 * a number.If n does not have a natural square root, the function
 * should return -1.
 * Return: returns square root
 */

int _sqrt_recursion(int n)
{
	/**
	 * if (n != ((n ^ (1 / n)) % (n ^ (1 / n) == 0)))
	 */
	if (n != ((n ^ (1 / n)) % ((n ^ (1 / n)) == 0)))
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n ^ (1 / n)));
	}
}
