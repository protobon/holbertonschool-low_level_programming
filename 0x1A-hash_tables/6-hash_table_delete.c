#include "hash_tables.h"

/**
 * free_node - frees a hash_node
 * @node: node
 */
void free_node(hash_node_t *node)
{
	if (node->key)
		free(node->key);
	if (node->value)
		free(node->value);
	free(node);
}

/**
  * hash_table_delete - deletes a ht
  * @ht: ht to delete
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *del;

	if (!ht)
		return;
	for (; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			del = ht->array[i];
			while (del->next != NULL)
			{
				tmp = del->next;
				free_node(del);
				del = tmp;
			}
			free_node(del);
		}
	}
	free(ht->array);
	free(ht);
}
