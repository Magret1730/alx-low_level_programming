#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: begining of the list
 *
 * Description: function that reverses a listint_t linked list
 * You are not allowed to use more than 1 loop
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}

	*head = previous;

	return (*head);
}
