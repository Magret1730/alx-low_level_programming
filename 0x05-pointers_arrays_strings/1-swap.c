#include "main.h"

/**
 * swap_int - swaps integers
 * @a: integer
 * @b: integer
 *
 * Description: a function that swaps the value
 * of two integers.
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
