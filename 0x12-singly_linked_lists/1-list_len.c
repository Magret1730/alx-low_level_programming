#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer ro the head of the list
 * Description: function that returns the number of elements in a
 * linked list_t list
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	const list_t *present = h;

	while(present != NULL)
	{
		if (present->str == NULL)
			return (-1);
		else
		{
			present = present->next;
			count++;
		}
	}
	return (count);
}
