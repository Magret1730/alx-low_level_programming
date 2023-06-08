#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list
 * @h: address of head
 *
 * Description: function that frees a listint_t list
 * This function can free lists with a loop
 * You should go though the list only once
 * The function sets the head to NULL
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		count++;
		free(current);

		if (next >= current)
		{
			*h = NULL;
			break;
		}
		current = next;
	}
	*h = NULL;

	return (count);
}
