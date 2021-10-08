#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table to add or update element
  * @key: key of element, str, can't be empty
  * @value: value of element, str, can be empty
  * Return: 1 if success, 0 if fail
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = NULL;

	if (!ht)
		return (0);
	if (!key || strlen(key) == 0 || !value)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(new);
			ht->array[idx]->value = strdup(value);
			return (1);
		}
		new->next = ht->array[idx];
	}
	else
		new->next = NULL;

	ht->array[idx] = new;
	return (1);
}
