#include "main.h"

/**
 * set_string - value of a pointer to character
 * @s: pointer to pointer
 * @to: pointer of a variable
 *
 * Description - function that sets the value of a pointer to a char
 * Return: nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
