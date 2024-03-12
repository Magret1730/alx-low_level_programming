#include "search_algos.h"
/**
 * advanced_binary - Searches for a value in a sorted array using binarysearch
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where val is located, or -1 if not present or if arr is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the search range.
 * @high: The ending index of the search range.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not present.
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int mid, i;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary_recursive(array, low, mid, value));
		else
			return (mid);
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	else
		return (advanced_binary_recursive(array, low, mid - 1, value));
}
