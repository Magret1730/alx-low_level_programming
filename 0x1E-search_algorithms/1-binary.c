#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: %d", array[left]);
	for (i = left + 1; i <= right; i++)
		printf(", %d", array[i]);
	printf("\n");

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;

		if (left <= right)
		{
			printf("Searching in array: %d", array[left]);
			for (i = left + 1; i <= right; i++)
				printf(", %d", array[i]);
			printf("\n");
		}
	}
	return (-1);
}
