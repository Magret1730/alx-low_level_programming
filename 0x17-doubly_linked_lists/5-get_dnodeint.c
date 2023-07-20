#include "lists.h"

/**
* get_dnodeint_at_index - function that returns the nth node
* @head: head
* @index: index to be returned
* Description: function that returns the nth node
* of a dlistint_t linked list
* Return: nth node or NULL, if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}

	return (NULL);
}
