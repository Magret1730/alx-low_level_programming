#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer tp the head of the list
 * Description: function that prints all the elements of a list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	const list_t *present = h;

	while (present != NULL)
	{
		if (present->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", present->len, present->str);
		}
		present = present->next;
		count++;
	}
	return (count);
}
