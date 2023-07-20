#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	current = *head;
	while (current != NULL && count < index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);
	if (current->next != NULL)
		current->next->prev = prev;
	prev->next = current->next;
		free(current);
	return (1);
}
