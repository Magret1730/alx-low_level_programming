#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: count of arguments
 * Description: function that prints anything
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *string;
	int num;
	float float_num;
	char c;
	va_list param;

	va_start(param, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(param, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(param, int);
				printf("%d", num);
				break;
			case 'f':
				float_num = va_arg(param, double);
				printf("%f", float_num);
				break;
			case 's':
				string = va_arg(param, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(param);
	printf("\n");
}
