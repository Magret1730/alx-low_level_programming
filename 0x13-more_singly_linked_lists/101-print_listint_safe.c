#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: begining of the list
 *
 * Description: function that prints a listint_t linked list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *ptr = head;
	const listint_t *ptr1 = head;
	const listint_t *ptr2 = head;

	if (head == NULL)
		exit(98);
	/*Floyd's cycle-finding algorithm*/
	/*or the tortoise and hare algorithm*/
	while (ptr2 != NULL && ptr2->next != NULL)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		/*If they are equal, it means a loop has been detected.*/
		if (ptr1 == ptr2)
			exit(98);
	}
	while (ptr != NULL)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
