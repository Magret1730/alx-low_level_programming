#include "lists.h"

/**
* dlistint_len - function that returns the number
* of elements in a linked dlistint_t list
* @h: head
* Return: count
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		/* printf("%d\n", temp->n); */
		temp = temp->next;
	}

	return (count);
}
