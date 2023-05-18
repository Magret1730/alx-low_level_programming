#include "main.h"
#include "stdlib.h"
#include "string.h"
#include "stddef.h"

/**
 * _calloc - function that allocates memoryfor an array,using malloc
 * @nmemb: number of array
 * @size: size of array
 * Description: function that allocatesmemory for an array,using malloc
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * Return: If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);

	memset(pointer, 0, nmemb * size);

	return (pointer);
}
