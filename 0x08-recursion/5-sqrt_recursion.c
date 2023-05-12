#include "main.h"

/**
 * check_sqrt - checks for square root
 * @n: integer
 * @try: n / 2
 *
 * Description: an helper function to check for natural
 * square root
 * Return: square root of natural numbers or -1 if it isn't
 */

int check_sqrt(int n, int try)
{
	if (try * try == n)
	{
		return (try);
	}
	else if (try == 1)
	{
		return (-1);
	}
	else
	{
		int new_try = (try + (n / try)) / 2;

		return (check_sqrt(n, new_try));
	}
}

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
	/**
	 * if (n != ((n ^ (1 / n)) % ((n ^ (1 / n)) == 0)))
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n ^ (1 / n)));
	}
	*/
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (check_sqrt(n, n / 2));
	}
}
