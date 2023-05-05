#include "main.h"

/**
 * reverse_array - reverses array
 * @a: pointer to an array
 * @n: receives integers
 *
 * Description: a function that reverses the content of an
 * array. Where n is the number of elements of the array.
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int swap;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}

	/**
	 * for (i = 0; size < n; i--)
	{
		n--;
	}
	*/
}
