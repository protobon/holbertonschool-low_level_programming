#include "hash_tables.h"

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
				free(del);
				del = tmp;
			}
			free(del);
		}
	}
	free(ht->array);
	free(ht);
}
