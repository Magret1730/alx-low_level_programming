#include "lists.h"

/**
* print_dlistint - function that prints all the elements of a dlistint_t list
* @h: head
* Return: count
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (count);
}
