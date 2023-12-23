#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to add/update.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *dup_key;
	char *dup_value;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)(key), ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	dup_key = strdup(key);
	if (dup_key == NULL)
	{
		free(new_node);
		return (0);
	}
	dup_value = (value != NULL) ? strdup(value) : strdup("");
	if (dup_value == NULL)
	{
		free(dup_key);
		free(new_node);
		return (0);
	}
	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

}

