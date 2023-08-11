#include "hash_tables.h"

/**
* shash_table_create - function that creates a sorted hash table
* @size: size of the array
* Return: pointer to the newly created hash table
*/

shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long i;

	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * create_new_node - function that creates a new shash_node_t node
 * @key: key to insert
 * @value: value to insert
 * Return: pointer to the new node on success, NULL on failure
 */
shash_node_t *create_new_node(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->sprev = NULL;
	new_node->snext = NULL;

	return (new_node);
}

/**
 * insert_into_sorted_list - function thatinserts a node into asortedlinkedlist
 * @ht: pointer to the hash table
 * @new_node: pointer to the new node to insert
 */
void insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current = ht->shead;

	while (current != NULL && strcmp(new_node->key, current->key) > 0)
		current = current->snext;

	if (current != NULL)
	{
		new_node->sprev = current->sprev;
		current->sprev = new_node;
	}
	else
	{
		if (ht->stail != NULL)
			ht->stail->snext = new_node;
		else
			ht->shead = new_node;
		new_node->sprev = ht->stail;
		ht->stail = new_node;
	}
}

/**
 * shash_table_set - function thatinserts akey-valuepair into asortedhashtable
 * @ht: pointer to the hash table
 * @key: key to insert
 * @value: value to insert
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	char *key_copy;
	char *value_copy;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	key_copy = strdup(key);
	value_copy = strdup(value);
	if (key_copy == NULL || value_copy == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}

	new_node = create_new_node(key, value);
	if (new_node == NULL)
	{
		free(key_copy);
		free(value_copy);
		return (0);
	}
	insert_into_sorted_list(ht, new_node);

	ht->array[index] = new_node;

	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key you are looking for
 * Return: value associated with the element,or NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	for (current = ht->shead; current != NULL; current = current->snext)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
	}
	return (NULL);
}

/**
 * shash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: If ht is NULL, don’t print anything. Printed values in hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	int first_pair = 1;

	if (ht == NULL)
		return;
	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (!first_pair)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first_pair = 0;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints a hash table in reverse order
 * @ht: hash table
 * Return: If ht is NULL, don’t print anything. Printed values in hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	int first_pair = 1;

	if (ht == NULL)
		return;
	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (!first_pair)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first_pair = 0;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		temp = current;
		current = current->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	free(ht->array);
	free(ht);
}
