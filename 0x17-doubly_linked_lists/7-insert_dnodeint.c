#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Value to be added in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp1 = add_dnodeint(h, n);
		return (temp1);
	}

	temp = *h;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	temp1 = malloc(sizeof(dlistint_t));
	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;
	temp1->prev = temp;
	temp1->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp1;

	temp->next = temp1;

	return (temp1);
}
