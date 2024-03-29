#include "lists.h"

/**
* free_dlistint - unction that frees a dlistint_t list
* @head: head
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}
}
