#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: address of the beginning of the node
 * Description: The function sets the head to NULL
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
		*head = NULL;
}
