#include <stdio.h>
#include "main.h"

/**
 * print_array - n element of an array
 * @a: receives integer
 * @n: receives integer
 *
 * Description: funtion that prints n element of an
 * array, followed by a new line.
 * Return: array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
