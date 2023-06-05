#include "lists.h"
/**
 * listint_len - returns the numberofelements in a linkedlistint_t list
 * @h: node
 * Description: function that returns the number of elements
 * in a linked listint_t list
 * Return: number of elements in a linked listint_t list
 */
i
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
