#include "main.h"
#include "stdlib.h"
#include "stddef.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: value
 * Description: function that allocates memory using malloc.
 * if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98.
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
