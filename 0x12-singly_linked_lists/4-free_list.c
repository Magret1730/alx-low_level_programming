#include "lists.h"

/**
 * free-list - function that frees a list_t list
 * @head: begining of the node
 * Description: function that frees a list_t list.
 * Return: void
 */

void free_list(list_t *head)
{
	/**
	 * if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	*/

	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
