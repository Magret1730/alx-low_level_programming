#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of characters
 * @c: character
 *
 * Description: function that creates an array of chars, and
 * initializes it with a specific char.
 * Return: NULL if size is 0. Returns a pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
