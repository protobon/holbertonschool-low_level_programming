#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: hash table to look for the key
  * @key: key to look for inside the ht
  * Return: value, or NULL if key not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	char *value;
	hash_node_t *tmp;

	if (!ht)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);

	tmp = ht->array[idx];
	while (tmp->key != key)
		tmp = tmp->next;
	value = strdup(tmp->value);

	return (value);
}
