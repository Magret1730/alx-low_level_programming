#include "main.h"

/**
 * check_prime - checks for prime number
 * @n: an integer
 * @i: an integer
 *
 * Description: an elper function to help check for
 * prime numbers
 * Return: 1 for prime numbers and 0 for others
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - checks for prime number
 * @n: receives integer
 *
 * Description: a function that uses the check_prime
 * function to check for prime numbers
 * Return: 1 for prime numbers and 0 for others
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
