#include "lists.h"
/**
 * sum_listint -  returns the sum of all the data (n)
 * @head: value of the beginning of the node
 * Description: function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
