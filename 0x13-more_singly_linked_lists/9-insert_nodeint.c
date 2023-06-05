#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of head
 * @idx: position of the node to be added
 * @n: value of the node to be added
 * Description: function that inserts a new node at a given position
 * where idx is the index of the list where the new node should be
 * added. Index starts at 0. if it is not possible to add the new node
 * at index idx, do not add the new node and return NULL.
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
