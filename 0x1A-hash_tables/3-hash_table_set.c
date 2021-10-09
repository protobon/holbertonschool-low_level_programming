#include "hash_tables.h"

/**
  * insert_node - inserts a new node to hash table
  * @h: pointer to hash_table node
  * @k: key of new node
  * @v: value of new node
  * Return: new node, or NULL if failed
  */
hash_node_t *insert_node(hash_node_t **h, const char *k, const char *v)
{
	hash_node_t *new = NULL;

	if (!h)
		return (NULL);
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(k);
	new->value = strdup(v);
	new->next = *h;
	*h = new;

	return (new);
}

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
	hash_node_t *tmp = NULL;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		if (!tmp)
		{
			if (!insert_node(&(ht->array[idx]), key, value))
				return (0);
			else
				return (1);
		}
	}
	if (!insert_node(&(ht->array[idx]), key, value))
		return (0);
	return (1);
}
