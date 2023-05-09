#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of diagonals in mmatrix
 * @a: an array
 * @size: size of matrix
 *
 * Description: function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum;
	int add;

	sum = 0;
	add = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
		add = add + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum, add);
}
