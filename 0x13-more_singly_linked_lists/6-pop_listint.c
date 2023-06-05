#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of the beginning of the node
 * Description: function that deletes the head node of a
 * listint_t linked list
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;
		*head = (*head)->next;
		value = temp->n;
		free(temp);
		temp = NULL;
	}

	return (value);
}
