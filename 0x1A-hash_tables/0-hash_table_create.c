#include "hash_tables.h"

/**
* hash_table_create - function that creates a hash table
* size: size of the array
* Return: pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;

	hash_table_t *table = malloc(sizeof(hash_table_t));
	{
		if (table == NULL)
			return (NULL);
	}

	table->array = malloc(sizeof(hash_node_t));
	{
		if (table->array == NULL)
			return (NULL);
	}

	table->size = size;
	{
		for(i = 0; i < (size - 1); i++)
			table->array[i] = NULL;
	}

	return (table);
}
