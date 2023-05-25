#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: separator string
 * @n: number count
 * Description: function that prints numbers followed by a new line
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list num;

	va_start(num, n);

	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		x = va_arg(num, unsigned int);
		if (i < n - 1)
			printf("%d%s", x, separator);
		else
			printf("%d\n", x);
	}
	va_end(num);
}
