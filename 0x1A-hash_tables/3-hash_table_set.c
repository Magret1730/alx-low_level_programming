#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key and can not be an empty string
 * @value: value associated with the key. It  must be duplicated.
 * It can be an empty string.
 *
 * Description: In case of collision,
 * add the new node at the beginning of the list
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;

	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	/* Check if key already exists in the hash table */
	for (current = ht->array[index]; current != NULL; current = current->next)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Update the value and return */
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
	}
	/* Key does not exist, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	/* Insert the new node at the beginning of the linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
