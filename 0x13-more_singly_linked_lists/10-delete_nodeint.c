#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: address of head
 * @index: position to delete
 * Description: function that deletes the node at index
 * index of a listint_t linked list. where index is the index
 * of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	prev = NULL;
	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
