#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: count of parameters
 * Description: function that returns the sum of all its parameters
 * Return: 0, If n == 0; else return sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, j;
	unsigned int sum = 0;

	va_list para_count;

	va_start(para_count, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		j = va_arg(para_count, unsigned int);
		sum = sum + j;
	}
	va_end(para_count);

	return (sum);
}
