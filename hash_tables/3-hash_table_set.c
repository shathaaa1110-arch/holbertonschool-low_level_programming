#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n, *temp;
	char *v_copy;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (temp = ht->array[i]; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = v_copy;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(v_copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		free(v_copy);
		return (0);
	}
	n->value = v_copy;
	n->next = ht->array[i];
	ht->array[i] = n;
	return (1);
}
