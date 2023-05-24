#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of elements to be searched
 * @size: size of array
 * @cmp: function pointer
 * Description: function that searches for an integer
 * Return: p
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			/**
			 * p = action(array[i]);
			for (j = 0; j <= p; j++)
			{
				if (p % 10)
					return (p);
				else
					return (-1);
			}
			*/
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
