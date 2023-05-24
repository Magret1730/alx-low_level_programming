#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: pointer the name
 * @f: function pointer name
 * Description: function that prints a name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
