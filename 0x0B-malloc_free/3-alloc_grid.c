#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Description: function that returns a pointer to a 2 dimensional
 * array of integers. Each element of the grid should be initialized to 0.
 * Return: NULL on failure and if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int **t;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	t = malloc(sizeof(int *) * height);
	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		t[i] = malloc(sizeof(int) * width);
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(t[j]);
			}
			free(t);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}

	return (t);
}
