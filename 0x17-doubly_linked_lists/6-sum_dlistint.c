#include "lists.h"

/**
* sum_dlistint - function that returns the sum of all the data (n)
* @head: head
* Description: function that returns the sum of all the data (n)
* of a dlistint_t linked list
* Return: sum of all values or 0, if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int count = 0, sum = 0;

	dlistint_t *temp = head;

		while (temp != NULL)
		{
			sum = sum + temp->n;
			count++;
			temp = temp->next;
		}

	return (sum);
}
