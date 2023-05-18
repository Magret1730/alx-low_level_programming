#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimun value
 * @max: maximum value
 * Description: function that creates an array of integers
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * Return: If min > max, return NULL
 *	If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *pointer;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	pointer = (int *)malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);

	for (i = min; i < size; i++)
		pointer[i] = min++;

	return (pointer);
}
