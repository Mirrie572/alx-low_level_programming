#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}
/**
 * insert_sorted - Inserts a node into a sorted linked list
 * @ht: The sorted hash table
 * @new_node: The new node to insert
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (ht == NULL || new_node == NULL)
		return;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}
	current = ht->shead;
	while (current != NULL)
	{
		if (strcmp(new_node->key, current->key) < 0)
		{
			if (current->sprev != NULL)
				current->sprev->snext = new_node;
			else
				ht->shead = new_node;

			new_node->sprev = current->sprev;
			new_node->snext = current;
			current->sprev = new_node;

			return;
		}
		if (current->snext == NULL)
			break;
		current = current->snext;
	}
	current->snext = new_node;
	new_node->sprev = current;
	ht->stail = new_node;
}
/**
 * shash_table_set - Inserts a key/value pair into the sorted hash table
 * @ht: The sorted hash table
 * @key: The key to insert
 * @value: The value to insert
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(shash_node_t));
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
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	insert_sorted(ht, new_node);
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: The sorted hash table
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
/**
 * shash_table_print - Prints the sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;
	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}
