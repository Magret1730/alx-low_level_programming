#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: previously allocated pointer
 * @old_size: previously allocated size
 * @new_size: new allocated size
 * Description: where ptr is a pointer to the memory previouslyallocated with a
 * call to malloc: malloc(old_size).old_size is the size, in bytes,
 * of the allocated space for ptr and new_size is the new size, in
 * bytes of the new memory block.The contents will be copied to the
 * newly allocated space, in the range from the start of ptr up to the
 * minimum of the old and new sizes.If new_size > old_size, the “added”
 * memory should not be initialized.If new_size == old_size do not do
 * anything and return ptr.If ptr is NULL, then the call is equivalent
 * to malloc(new_size), for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL, then the call is
 * equivalent to free(ptr). Return NULL
 * Don’t forget to free ptr when it makes sense
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		if (old_size < new_size)
			copy_size = old_size;
		else
			copy_size = new_size;

		memcpy(new_ptr, ptr, copy_size);
		free(ptr);
	}

	return (new_ptr);
}
