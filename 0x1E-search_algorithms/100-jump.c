#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j;
	int jump;

	jump = (int)sqrt(size);

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i - jump, i);

	for  (j = i - jump; j <= (i < size ? i : size - 1); j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);

		if (array[j] == value)
			return (j);
	}

	return (-1);
}
