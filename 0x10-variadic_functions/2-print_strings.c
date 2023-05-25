#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator
 * @n: count of parameters
 * Description: function that prints strings followed by a new line
 * separator is the string to be printed between the strings
 * n is the number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		/**
		 * if (separator == NULL)
			printf("%s", s);
		else if (separator == 0 && i == 0)
			printf("%s", s);
		else
			printf("%s%s, separator, s");
		*/
	}
	printf("\n");

	va_end(strings);
}
