#include "lists.h"

/**
* add_dnodeint_end - function that adds a new node
* @head: head
* @n: value to be added
* Description: function that adds a new node
* at the end of a dlistint_t list
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp1 = malloc(sizeof(dlistint_t));

	if (temp1 == NULL)
		return (NULL);

	temp1->n = n;
	temp1->next = NULL;

	if (*head == NULL)
	{
		temp1->prev = NULL;
		*head = temp1;
	}
	else
	{
		dlistint_t *temp2 = *head;

		while (temp2->next != NULL)
			temp2 = temp2->next;

		temp2->next = temp1;
		temp1->prev = temp2;
	}
	return (temp1);
}
