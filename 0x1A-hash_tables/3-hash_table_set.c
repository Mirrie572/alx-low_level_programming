#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: 1 if successful, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *c_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	c_node = ht->array[index];
	while (c_node)
	{
		if (strcmp(c_node->key, key) == 0)
		{
			free(c_node->value);
			c_node->value = strdup(value);
			if (c_node->value == NULL)
				return (0);
			return (1);
		}
		c_node = c_node->next;
	}
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
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
