#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * using exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located,
 * or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, left, right;

	if (array == NULL || size == 0)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size - 1) ? i : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (binary_search_exponential(array, left, right, value));
}

/**
 * binary_search_exponential - Searches for a value in a sorted array
 * using binary search
 * @array: Pointer to the first element of the array to search in
 * @left: The left index of the subarray to search in
 * @right: The right index of the subarray to search in
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int binary_search_exponential(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
