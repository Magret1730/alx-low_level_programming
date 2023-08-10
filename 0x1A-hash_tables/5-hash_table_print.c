#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: If ht is NULL, don’t print anything. Printed values in hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;

	int first_pair = 1;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_pair = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
